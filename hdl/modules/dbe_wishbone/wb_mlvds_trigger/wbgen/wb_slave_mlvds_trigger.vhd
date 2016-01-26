---------------------------------------------------------------------------------------
-- Title          : Wishbone slave core for Control and status register for the MLVDS trigger
---------------------------------------------------------------------------------------
-- File           : wb_slave_mlvds_trigger.vhd
-- Author         : auto-generated by wbgen2 from wb_mlvds_trigger.wb
-- Created        : Tue Jan 26 10:30:41 2016
-- Standard       : VHDL'87
---------------------------------------------------------------------------------------
-- THIS FILE WAS GENERATED BY wbgen2 FROM SOURCE FILE wb_mlvds_trigger.wb
-- DO NOT HAND-EDIT UNLESS IT'S ABSOLUTELY NECESSARY!
---------------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity wb_slave_mlvds_trigger is
  port (
    rst_n_i                                  : in     std_logic;
    clk_sys_i                                : in     std_logic;
    wb_adr_i                                 : in     std_logic_vector(2 downto 0);
    wb_dat_i                                 : in     std_logic_vector(31 downto 0);
    wb_dat_o                                 : out    std_logic_vector(31 downto 0);
    wb_cyc_i                                 : in     std_logic;
    wb_sel_i                                 : in     std_logic_vector(3 downto 0);
    wb_stb_i                                 : in     std_logic;
    wb_we_i                                  : in     std_logic;
    wb_ack_o                                 : out    std_logic;
    wb_stall_o                               : out    std_logic;
-- Port for std_logic_vector field: 'Length Input - Bus 0 to 3' in reg: 'Receiver Ports - Lengths 0 to 3'
    wb_trig_rcv_len_0_3_o                    : out    std_logic_vector(31 downto 0);
-- Port for std_logic_vector field: 'Length Input - Bus 4 to 7' in reg: 'Receiver Ports - Lengths 4 to 7'
    wb_trig_rcv_len_4_7_o                    : out    std_logic_vector(31 downto 0);
-- Port for std_logic_vector field: 'Data Input P' in reg: 'Receiver Ports - Data'
    wb_trig_rcv_data_data_p_o                : out    std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Data Input N' in reg: 'Receiver Ports - Data'
    wb_trig_rcv_data_data_n_o                : out    std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Pulse Output' in reg: 'Receiver Ports - Data'
    wb_trig_rcv_data_pulse_i                 : in     std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Transmitter Pulse Length - Bus 0 to 3' in reg: 'Transmitter Ports - Lengths 0 to 3'
    wb_trig_transm_len_0_3_o                 : out    std_logic_vector(31 downto 0);
-- Port for std_logic_vector field: 'Transmitter Pulse Length - Bus 4 to 7' in reg: 'Transmitter Ports - Lengths 4 to 7'
    wb_trig_transm_len_4_7_o                 : out    std_logic_vector(31 downto 0);
-- Port for std_logic_vector field: 'Pulse Input' in reg: 'Transmitter Ports'
    wb_trig_transm_data_pulse_o              : out    std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Extended Output N' in reg: 'Transmitter Ports'
    wb_trig_transm_data_extended_n_i         : in     std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Extended Output P' in reg: 'Transmitter Ports'
    wb_trig_transm_data_extended_p_i         : in     std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'DIR' in reg: 'Trigger control'
    wb_trig_trigger_dir_o                    : out    std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Termination Control' in reg: 'Trigger control'
    wb_trig_trigger_term_o                   : out    std_logic_vector(7 downto 0);
-- Port for std_logic_vector field: 'Trigger Value' in reg: 'Trigger control'
    wb_trig_trigger_trig_val_o               : out    std_logic_vector(7 downto 0)
  );
end wb_slave_mlvds_trigger;

architecture syn of wb_slave_mlvds_trigger is

signal wb_trig_rcv_len_0_3_int                  : std_logic_vector(31 downto 0);
signal wb_trig_rcv_len_4_7_int                  : std_logic_vector(31 downto 0);
signal wb_trig_rcv_data_data_p_int              : std_logic_vector(7 downto 0);
signal wb_trig_rcv_data_data_n_int              : std_logic_vector(7 downto 0);
signal wb_trig_transm_len_0_3_int               : std_logic_vector(31 downto 0);
signal wb_trig_transm_len_4_7_int               : std_logic_vector(31 downto 0);
signal wb_trig_transm_data_pulse_int            : std_logic_vector(7 downto 0);
signal wb_trig_trigger_dir_int                  : std_logic_vector(7 downto 0);
signal wb_trig_trigger_term_int                 : std_logic_vector(7 downto 0);
signal wb_trig_trigger_trig_val_int             : std_logic_vector(7 downto 0);
signal ack_sreg                                 : std_logic_vector(9 downto 0);
signal rddata_reg                               : std_logic_vector(31 downto 0);
signal wrdata_reg                               : std_logic_vector(31 downto 0);
signal bwsel_reg                                : std_logic_vector(3 downto 0);
signal rwaddr_reg                               : std_logic_vector(2 downto 0);
signal ack_in_progress                          : std_logic      ;
signal wr_int                                   : std_logic      ;
signal rd_int                                   : std_logic      ;
signal allones                                  : std_logic_vector(31 downto 0);
signal allzeros                                 : std_logic_vector(31 downto 0);

begin
-- Some internal signals assignments. For (foreseen) compatibility with other bus standards.
  wrdata_reg <= wb_dat_i;
  bwsel_reg <= wb_sel_i;
  rd_int <= wb_cyc_i and (wb_stb_i and (not wb_we_i));
  wr_int <= wb_cyc_i and (wb_stb_i and wb_we_i);
  allones <= (others => '1');
  allzeros <= (others => '0');
-- 
-- Main register bank access process.
  process (clk_sys_i, rst_n_i)
  begin
    if (rst_n_i = '0') then 
      ack_sreg <= "0000000000";
      ack_in_progress <= '0';
      rddata_reg <= "00000000000000000000000000000000";
      wb_trig_rcv_len_0_3_int <= "00000000000000000000000000000000";
      wb_trig_rcv_len_4_7_int <= "00000000000000000000000000000000";
      wb_trig_rcv_data_data_p_int <= "00000000";
      wb_trig_rcv_data_data_n_int <= "00000000";
      wb_trig_transm_len_0_3_int <= "00000000000000000000000000000000";
      wb_trig_transm_len_4_7_int <= "00000000000000000000000000000000";
      wb_trig_transm_data_pulse_int <= "00000000";
      wb_trig_trigger_dir_int <= "00000000";
      wb_trig_trigger_term_int <= "00000000";
      wb_trig_trigger_trig_val_int <= "00000000";
    elsif rising_edge(clk_sys_i) then
-- advance the ACK generator shift register
      ack_sreg(8 downto 0) <= ack_sreg(9 downto 1);
      ack_sreg(9) <= '0';
      if (ack_in_progress = '1') then
        if (ack_sreg(0) = '1') then
          ack_in_progress <= '0';
        else
        end if;
      else
        if ((wb_cyc_i = '1') and (wb_stb_i = '1')) then
          case rwaddr_reg(2 downto 0) is
          when "000" => 
            if (wb_we_i = '1') then
              wb_trig_rcv_len_0_3_int <= wrdata_reg(31 downto 0);
            end if;
            rddata_reg(31 downto 0) <= wb_trig_rcv_len_0_3_int;
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "001" => 
            if (wb_we_i = '1') then
              wb_trig_rcv_len_4_7_int <= wrdata_reg(31 downto 0);
            end if;
            rddata_reg(31 downto 0) <= wb_trig_rcv_len_4_7_int;
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "010" => 
            if (wb_we_i = '1') then
              wb_trig_rcv_data_data_p_int <= wrdata_reg(7 downto 0);
              wb_trig_rcv_data_data_n_int <= wrdata_reg(15 downto 8);
            end if;
            rddata_reg(7 downto 0) <= wb_trig_rcv_data_data_p_int;
            rddata_reg(15 downto 8) <= wb_trig_rcv_data_data_n_int;
            rddata_reg(23 downto 16) <= wb_trig_rcv_data_pulse_i;
            rddata_reg(24) <= 'X';
            rddata_reg(25) <= 'X';
            rddata_reg(26) <= 'X';
            rddata_reg(27) <= 'X';
            rddata_reg(28) <= 'X';
            rddata_reg(29) <= 'X';
            rddata_reg(30) <= 'X';
            rddata_reg(31) <= 'X';
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "011" => 
            if (wb_we_i = '1') then
              wb_trig_transm_len_0_3_int <= wrdata_reg(31 downto 0);
            end if;
            rddata_reg(31 downto 0) <= wb_trig_transm_len_0_3_int;
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "100" => 
            if (wb_we_i = '1') then
              wb_trig_transm_len_4_7_int <= wrdata_reg(31 downto 0);
            end if;
            rddata_reg(31 downto 0) <= wb_trig_transm_len_4_7_int;
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "101" => 
            if (wb_we_i = '1') then
              wb_trig_transm_data_pulse_int <= wrdata_reg(7 downto 0);
            end if;
            rddata_reg(7 downto 0) <= wb_trig_transm_data_pulse_int;
            rddata_reg(15 downto 8) <= wb_trig_transm_data_extended_n_i;
            rddata_reg(23 downto 16) <= wb_trig_transm_data_extended_p_i;
            rddata_reg(24) <= 'X';
            rddata_reg(25) <= 'X';
            rddata_reg(26) <= 'X';
            rddata_reg(27) <= 'X';
            rddata_reg(28) <= 'X';
            rddata_reg(29) <= 'X';
            rddata_reg(30) <= 'X';
            rddata_reg(31) <= 'X';
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when "110" => 
            if (wb_we_i = '1') then
              wb_trig_trigger_dir_int <= wrdata_reg(7 downto 0);
              wb_trig_trigger_term_int <= wrdata_reg(15 downto 8);
              wb_trig_trigger_trig_val_int <= wrdata_reg(23 downto 16);
            end if;
            rddata_reg(7 downto 0) <= wb_trig_trigger_dir_int;
            rddata_reg(15 downto 8) <= wb_trig_trigger_term_int;
            rddata_reg(23 downto 16) <= wb_trig_trigger_trig_val_int;
            rddata_reg(24) <= 'X';
            rddata_reg(25) <= 'X';
            rddata_reg(26) <= 'X';
            rddata_reg(27) <= 'X';
            rddata_reg(28) <= 'X';
            rddata_reg(29) <= 'X';
            rddata_reg(30) <= 'X';
            rddata_reg(31) <= 'X';
            ack_sreg(0) <= '1';
            ack_in_progress <= '1';
          when others =>
-- prevent the slave from hanging the bus on invalid address
            ack_in_progress <= '1';
            ack_sreg(0) <= '1';
          end case;
        end if;
      end if;
    end if;
  end process;
  
  
-- Drive the data output bus
  wb_dat_o <= rddata_reg;
-- Length Input - Bus 0 to 3
  wb_trig_rcv_len_0_3_o <= wb_trig_rcv_len_0_3_int;
-- Length Input - Bus 4 to 7
  wb_trig_rcv_len_4_7_o <= wb_trig_rcv_len_4_7_int;
-- Data Input P
  wb_trig_rcv_data_data_p_o <= wb_trig_rcv_data_data_p_int;
-- Data Input N
  wb_trig_rcv_data_data_n_o <= wb_trig_rcv_data_data_n_int;
-- Pulse Output
-- Transmitter Pulse Length - Bus 0 to 3
  wb_trig_transm_len_0_3_o <= wb_trig_transm_len_0_3_int;
-- Transmitter Pulse Length - Bus 4 to 7
  wb_trig_transm_len_4_7_o <= wb_trig_transm_len_4_7_int;
-- Pulse Input
  wb_trig_transm_data_pulse_o <= wb_trig_transm_data_pulse_int;
-- Extended Output N
-- Extended Output P
-- DIR
  wb_trig_trigger_dir_o <= wb_trig_trigger_dir_int;
-- Termination Control
  wb_trig_trigger_term_o <= wb_trig_trigger_term_int;
-- Trigger Value
  wb_trig_trigger_trig_val_o <= wb_trig_trigger_trig_val_int;
  rwaddr_reg <= wb_adr_i;
  wb_stall_o <= (not ack_sreg(0)) and (wb_stb_i and wb_cyc_i);
-- ACK signal generation. Just pass the LSB of ACK counter.
  wb_ack_o <= ack_sreg(0);
end syn;
