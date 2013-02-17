#include <inttypes.h>

#include "board.h"		// Board definitions: UART device structure
#include "uart.h"		 // UART device functions

#define CALC_BAUD(baudrate) \
	( ((( (unsigned long long)baudrate * 8ULL) << (16 - 7)) + \
		(CPU_CLOCK >> 8)) / (CPU_CLOCK >> 7) )

// Global UART handler.
uart_t *uart;

int uart_init(void)
{
	if (uart_devl->devices){
		// get first uart device found
		uart = (uart_t *)uart_devl->devices->base;//BASE_UART;
		uart->BCR = CALC_BAUD(UART_BAUDRATE);
		return 0;
	}

	// return error in case none uart device found
	return -1;
}

void uart_write_byte(int b)
{
	if (b == '\n')
		uart_write_byte('\r');
	while (uart->SR & UART_SR_TX_BUSY) ;
	uart->TDR = b;
}

void uart_write_string(char *s)
{
	while (*s)
		uart_write_byte(*(s++));
}

// See http://gcc.gnu.org/onlinedocs/gcc/Function-Attributes.html
// for the __attribute__ explanation
int puts(const char *s) __attribute__((alias("uart_write_string")));

int uart_poll(void)
{
	return uart->SR & UART_SR_RX_RDY;
}

int uart_read_byte(void)
{
	if (!uart_poll())
		return -1;

	return uart->RDR & 0xff;
}
