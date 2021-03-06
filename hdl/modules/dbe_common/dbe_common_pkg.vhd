library ieee;
use ieee.std_logic_1164.all;
use ieee.NUMERIC_STD.all;

package dbe_common_pkg is

  --------------------------------------------------------------------
  -- Components
  --------------------------------------------------------------------

  component reset_synch
  generic
  (
    -- Select 1 for no pipeline, and greater than 1 to insert
    -- pipeline stages
    g_pipeline                             : natural := 4
  );
  port
  (
    clk_i                                  : in  std_logic;
    arst_n_i                               : in  std_logic;
    rst_n_o                                : out std_logic
  );
  end component;

  component pulse2level
  port
  (
    clk_i                                  : in std_logic;
    rst_n_i                                : in std_logic;

    -- Pulse input
    pulse_i                                : in std_logic;
    -- Clear level
    clr_i                                  : in std_logic;
    -- Level output
    level_o                                : out std_logic
  );
  end component;


  component trigger_rcv is
    generic (
      g_glitch_len_width : positive;
      g_sync_edge        : string);
    port (
      clk_i   : in  std_logic;
      rst_n_i : in  std_logic;
      len_i   : in  std_logic_vector(g_glitch_len_width-1 downto 0);
      data_i  : in  std_logic;
      pulse_o : out std_logic);
  end component trigger_rcv;

  component extend_pulse_dyn is
    generic (
      g_width_bus_size : natural);
    port (
      clk_i         : in  std_logic;
      rst_n_i       : in  std_logic;
      pulse_i       : in  std_logic;
      pulse_width_i : in  unsigned(g_width_bus_size-1 downto 0);
      extended_o    : out std_logic := '0');
  end component extend_pulse_dyn;

  component counter_simple is
    generic (
      g_output_width : positive);
    port (
      clk_i   : in  std_logic;
      rst_n_i : in  std_logic;
      ce_i    : in  std_logic;
      up_i    : in  std_logic;
      down_i  : in  std_logic;
      count_o : out std_logic_vector(g_output_width-1 downto 0));
  end component counter_simple;

  component heartbeat
  generic
  (
    -- number of system clock cycles to count before blinking
    g_clk_counts                             : natural := 100000000
  );
  port
  (
    -- 100 MHz system clock
    clk_i                                    : in std_logic;
    rst_n_i                                  : in std_logic;

    -- Heartbeat pulse output
    heartbeat_o                              : out std_logic
  );
  end component;

end dbe_common_pkg;
