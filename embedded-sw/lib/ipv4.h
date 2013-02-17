#ifndef _IPV4_H_
#define _IPV4_H_

#define IP_VERSION  0
#define IP_TOS    (IP_VERSION+1)
#define IP_LEN    (IP_TOS+1)
#define IP_ID   (IP_LEN+2)
#define IP_FLAGS  (IP_ID+2)
#define IP_TTL    (IP_FLAGS+2)
#define IP_PROTOCOL (IP_TTL+1)
#define IP_CHECKSUM (IP_PROTOCOL+1)
#define IP_SOURCE (IP_CHECKSUM+2)
#define IP_DEST   (IP_SOURCE+4)
#define IP_END    (IP_DEST+4)

extern unsigned char myIP[];
extern unsigned char myMAC[];
extern unsigned char allMAC[];
extern unsigned char hisIP[4];
extern unsigned char hisMAC[6];

//void ipv4_init(const char *if_name);
//void ipv4_poll(void);

/* Internal to IP stack: */
unsigned int ipv4_checksum(unsigned short *buf, int shorts);

//void arp_init(const char *if_name);
//void arp_poll(void);

extern int needIP;
void setIP(unsigned char *IP);
void getIP(unsigned char *IP);

//int process_icmp(uint8_t * buf, int len);
//int process_bootp(uint8_t * buf, int len);  /* non-zero if IP was set */
//int send_bootp(uint8_t * buf, int retry);

#endif
