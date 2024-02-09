// Generated by CIRCT unknown git version
// Standard header to adapt well known macros to our needs.
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_REG_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_REG_INIT
`endif // not def RANDOMIZE
`ifndef RANDOMIZE
  `ifdef RANDOMIZE_MEM_INIT
    `define RANDOMIZE
  `endif // RANDOMIZE_MEM_INIT
`endif // not def RANDOMIZE

// RANDOM may be set to an expression that produces a 32-bit random unsigned value.
`ifndef RANDOM
  `define RANDOM $random
`endif // not def RANDOM

// Users can define 'PRINTF_COND' to add an extra gate to prints.
`ifndef PRINTF_COND_
  `ifdef PRINTF_COND
    `define PRINTF_COND_ (`PRINTF_COND)
  `else  // PRINTF_COND
    `define PRINTF_COND_ 1
  `endif // PRINTF_COND
`endif // not def PRINTF_COND_

// Users can define 'ASSERT_VERBOSE_COND' to add an extra gate to assert error printing.
`ifndef ASSERT_VERBOSE_COND_
  `ifdef ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ (`ASSERT_VERBOSE_COND)
  `else  // ASSERT_VERBOSE_COND
    `define ASSERT_VERBOSE_COND_ 1
  `endif // ASSERT_VERBOSE_COND
`endif // not def ASSERT_VERBOSE_COND_

// Users can define 'STOP_COND' to add an extra gate to stop conditions.
`ifndef STOP_COND_
  `ifdef STOP_COND
    `define STOP_COND_ (`STOP_COND)
  `else  // STOP_COND
    `define STOP_COND_ 1
  `endif // STOP_COND
`endif // not def STOP_COND_

// Users can define INIT_RANDOM as general code that gets injected into the
// initializer block for modules with registers.
`ifndef INIT_RANDOM
  `define INIT_RANDOM
`endif // not def INIT_RANDOM

// If using random initialization, you can also define RANDOMIZE_DELAY to
// customize the delay used, otherwise 0.002 is used.
`ifndef RANDOMIZE_DELAY
  `define RANDOMIZE_DELAY 0.002
`endif // not def RANDOMIZE_DELAY

// Define INIT_RANDOM_PROLOG_ for use in our modules below.
`ifndef INIT_RANDOM_PROLOG_
  `ifdef RANDOMIZE
    `ifdef VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM
    `else  // VERILATOR
      `define INIT_RANDOM_PROLOG_ `INIT_RANDOM #`RANDOMIZE_DELAY begin end
    `endif // VERILATOR
  `else  // RANDOMIZE
    `define INIT_RANDOM_PROLOG_
  `endif // RANDOMIZE
`endif // not def INIT_RANDOM_PROLOG_

module TLROM(
  input         clock,
                reset,
                auto_in_a_valid,
  input  [2:0]  auto_in_a_bits_opcode,
                auto_in_a_bits_param,
  input  [1:0]  auto_in_a_bits_size,
  input  [10:0] auto_in_a_bits_source,
  input  [16:0] auto_in_a_bits_address,
  input  [3:0]  auto_in_a_bits_mask,
  input         auto_in_a_bits_corrupt,
                auto_in_d_ready,
  output        auto_in_a_ready,
                auto_in_d_valid,
  output [1:0]  auto_in_d_bits_size,
  output [10:0] auto_in_d_bits_source,
  output [31:0] auto_in_d_bits_data
);

  wire [1023:0][31:0] _GEN =
    '{32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h73656D61,
      32'h6E2D7475,
      32'h7074756F,
      32'h2D6B636F,
      32'h6C630073,
      32'h6C6C6563,
      32'h2D6B636F,
      32'h6C632300,
      32'h73747075,
      32'h72726574,
      32'h6E690074,
      32'h6E657261,
      32'h702D7470,
      32'h75727265,
      32'h746E6900,
      32'h736B636F,
      32'h6C630076,
      32'h65646E2C,
      32'h76637369,
      32'h72007974,
      32'h69726F69,
      32'h72702D78,
      32'h616D2C76,
      32'h63736972,
      32'h686361,
      32'h7474612D,
      32'h67756265,
      32'h64006465,
      32'h646E6574,
      32'h78652D73,
      32'h74707572,
      32'h7265746E,
      32'h69007365,
      32'h6D616E2D,
      32'h67657200,
      32'h7365676E,
      32'h61720065,
      32'h6C646E61,
      32'h68700072,
      32'h656C6C6F,
      32'h72746E6F,
      32'h632D7470,
      32'h75727265,
      32'h746E6900,
      32'h736C6C65,
      32'h632D7470,
      32'h75727265,
      32'h746E6923,
      32'h6D6974,
      32'h642C7261,
      32'h622D6263,
      32'h75007375,
      32'h74617473,
      32'h617369,
      32'h2C766373,
      32'h69720067,
      32'h65720074,
      32'h6E756F63,
      32'h2D746E69,
      32'h6F706B61,
      32'h6572622D,
      32'h63657865,
      32'h2D657261,
      32'h77647261,
      32'h68006570,
      32'h79745F65,
      32'h63697665,
      32'h64007963,
      32'h6E657571,
      32'h6572662D,
      32'h6B636F6C,
      32'h63007963,
      32'h6E657571,
      32'h6572662D,
      32'h65736162,
      32'h656D6974,
      32'h687461,
      32'h702D7475,
      32'h6F647473,
      32'h306C61,
      32'h69726573,
      32'h6C6564,
      32'h6F6D0065,
      32'h6C626974,
      32'h61706D6F,
      32'h6300736C,
      32'h6C65632D,
      32'h657A6973,
      32'h2300736C,
      32'h6C65632D,
      32'h73736572,
      32'h64646123,
      32'h9000000,
      32'h2000000,
      32'h2000000,
      32'h2000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h100000,
      32'h1100,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h0,
      32'h30303030,
      32'h31314072,
      32'h65747465,
      32'h732D7465,
      32'h7365722D,
      32'h656C6974,
      32'h1000000,
      32'h2000000,
      32'h3000000,
      32'hD6000000,
      32'h4000000,
      32'h3000000,
      32'h6B636F,
      32'h6C632D64,
      32'h65786966,
      32'h1B000000,
      32'hC000000,
      32'h3000000,
      32'h0,
      32'h6B636F6C,
      32'h635F7375,
      32'h62705F6D,
      32'h65747379,
      32'h73627573,
      32'h5E010000,
      32'h15000000,
      32'h3000000,
      32'h65CD1D,
      32'h53000000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h51010000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h6B636F6C,
      32'h635F7375,
      32'h62705F6D,
      32'h65747379,
      32'h73627573,
      32'h1000000,
      32'h2000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h100000,
      32'h54,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h1000000,
      32'h46010000,
      32'h4000000,
      32'h3000000,
      32'h4000000,
      32'h35010000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h30747261,
      32'h752C6576,
      32'h69666973,
      32'h1B000000,
      32'hD000000,
      32'h3000000,
      32'h3000000,
      32'h2E010000,
      32'h4000000,
      32'h3000000,
      32'h303030,
      32'h30303034,
      32'h35406C61,
      32'h69726573,
      32'h1000000,
      32'h2000000,
      32'h6D656D,
      32'hE5000000,
      32'h4000000,
      32'h3000000,
      32'h100,
      32'h100,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h306D6F,
      32'h722C6576,
      32'h69666973,
      32'h1B000000,
      32'hC000000,
      32'h3000000,
      32'h30,
      32'h30303031,
      32'h406D6F72,
      32'h1000000,
      32'h2000000,
      32'h4000000,
      32'hD6000000,
      32'h4000000,
      32'h3000000,
      32'h1000000,
      32'h23010000,
      32'h4000000,
      32'h3000000,
      32'h1000000,
      32'h10010000,
      32'h4000000,
      32'h3000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h4,
      32'hC,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'hB000000,
      32'h2000000,
      32'hEF000000,
      32'h8000000,
      32'h3000000,
      32'hC1000000,
      32'h0,
      32'h3000000,
      32'h306369,
      32'h6C702C76,
      32'h63736972,
      32'h1B000000,
      32'hC000000,
      32'h3000000,
      32'h1000000,
      32'hB0000000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h30303030,
      32'h30306340,
      32'h72656C6C,
      32'h6F72746E,
      32'h6F632D74,
      32'h70757272,
      32'h65746E69,
      32'h1000000,
      32'h2000000,
      32'h100000,
      32'h300000,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h30,
      32'h726F7272,
      32'h652C6576,
      32'h69666973,
      32'h1B000000,
      32'hE000000,
      32'h3000000,
      32'h30,
      32'h30303340,
      32'h65636976,
      32'h65642D72,
      32'h6F727265,
      32'h1000000,
      32'h2000000,
      32'h1000000,
      32'hD6000000,
      32'h4000000,
      32'h3000000,
      32'h6D656D,
      32'hE5000000,
      32'h4000000,
      32'h3000000,
      32'h400,
      32'h80,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h0,
      32'h306D6974,
      32'h642C6576,
      32'h69666973,
      32'h1B000000,
      32'hD000000,
      32'h3000000,
      32'h30,
      32'h30303030,
      32'h30303840,
      32'h6D697464,
      32'h1000000,
      32'h2000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h100000,
      32'h0,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'hFFFF0000,
      32'h2000000,
      32'hEF000000,
      32'h8000000,
      32'h3000000,
      32'h0,
      32'h6761746A,
      32'h3010000,
      32'h5000000,
      32'h3000000,
      32'h0,
      32'h3331302D,
      32'h67756265,
      32'h642C7663,
      32'h73697200,
      32'h3331302D,
      32'h67756265,
      32'h642C6576,
      32'h69666973,
      32'h1B000000,
      32'h21000000,
      32'h3000000,
      32'h3040,
      32'h72656C6C,
      32'h6F72746E,
      32'h6F632D67,
      32'h75626564,
      32'h1000000,
      32'h2000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h100000,
      32'h1000,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h3030,
      32'h30303031,
      32'h40726574,
      32'h61672D6B,
      32'h636F6C63,
      32'h1000000,
      32'h2000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h100,
      32'h2,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h7000000,
      32'h2000000,
      32'h3000000,
      32'h2000000,
      32'hEF000000,
      32'h10000000,
      32'h3000000,
      32'h0,
      32'h30746E69,
      32'h6C632C76,
      32'h63736972,
      32'h1B000000,
      32'hD000000,
      32'h3000000,
      32'h30,
      32'h30303030,
      32'h30324074,
      32'h6E696C63,
      32'h1000000,
      32'h2000000,
      32'h6C6F72,
      32'h746E6F63,
      32'hE5000000,
      32'h8000000,
      32'h3000000,
      32'h100000,
      32'h400000,
      32'h8E000000,
      32'h8000000,
      32'h3000000,
      32'h30,
      32'h30303440,
      32'h6765722D,
      32'h73736572,
      32'h6464612D,
      32'h746F6F62,
      32'h1000000,
      32'hDE000000,
      32'h0,
      32'h3000000,
      32'h737562,
      32'h2D656C70,
      32'h6D697300,
      32'h636F732D,
      32'h64726179,
      32'h70696863,
      32'h2C726162,
      32'h2D626375,
      32'h1B000000,
      32'h20000000,
      32'h3000000,
      32'h1000000,
      32'hF000000,
      32'h4000000,
      32'h3000000,
      32'h1000000,
      32'h0,
      32'h4000000,
      32'h3000000,
      32'h636F73,
      32'h1000000,
      32'h2000000,
      32'h30,
      32'h66697468,
      32'h2C626375,
      32'h1B000000,
      32'hA000000,
      32'h3000000,
      32'h0,
      32'h66697468,
      32'h1000000,
      32'h2000000,
      32'h2000000,
      32'h2000000,
      32'h2000000,
      32'hD6000000,
      32'h4000000,
      32'h3000000,
      32'hC1000000,
      32'h0,
      32'h3000000,
      32'h6374,
      32'h6E692D75,
      32'h70632C76,
      32'h63736972,
      32'h1B000000,
      32'hF000000,
      32'h3000000,
      32'h1000000,
      32'hB0000000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h72656C6C,
      32'h6F72746E,
      32'h6F632D74,
      32'h70757272,
      32'h65746E69,
      32'h1000000,
      32'h1000000,
      32'hA3000000,
      32'h4000000,
      32'h3000000,
      32'h40420F00,
      32'h40000000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h79616B6F,
      32'h9C000000,
      32'h5000000,
      32'h3000000,
      32'h6D,
      32'h7068697A,
      32'h5F696563,
      32'h6E656669,
      32'h7A5F7273,
      32'h63697A69,
      32'h32337672,
      32'h92000000,
      32'h1A000000,
      32'h3000000,
      32'h0,
      32'h8E000000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h6F000000,
      32'h4000000,
      32'h3000000,
      32'h757063,
      32'h63000000,
      32'h4000000,
      32'h3000000,
      32'h766373,
      32'h69720072,
      32'h6F646F73,
      32'h2C726162,
      32'h2D626375,
      32'h1B000000,
      32'h14000000,
      32'h3000000,
      32'hF15365,
      32'h53000000,
      32'h4000000,
      32'h3000000,
      32'h30,
      32'h40757063,
      32'h1000000,
      32'h40420F00,
      32'h40000000,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'hF000000,
      32'h4000000,
      32'h3000000,
      32'h1000000,
      32'h0,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h73757063,
      32'h1000000,
      32'h2000000,
      32'h0,
      32'h30303030,
      32'h30303435,
      32'h406C6169,
      32'h7265732F,
      32'h636F732F,
      32'h34000000,
      32'h15000000,
      32'h3000000,
      32'h6E65,
      32'h736F6863,
      32'h1000000,
      32'h2000000,
      32'h0,
      32'h30303030,
      32'h30303435,
      32'h406C6169,
      32'h7265732F,
      32'h636F732F,
      32'h2C000000,
      32'h15000000,
      32'h3000000,
      32'h736573,
      32'h61696C61,
      32'h1000000,
      32'h0,
      32'h64726179,
      32'h70696863,
      32'h2C726162,
      32'h2D626375,
      32'h26000000,
      32'h11000000,
      32'h3000000,
      32'h0,
      32'h7665642D,
      32'h64726179,
      32'h70696863,
      32'h2C726162,
      32'h2D626375,
      32'h1B000000,
      32'h15000000,
      32'h3000000,
      32'h1000000,
      32'hF000000,
      32'h4000000,
      32'h3000000,
      32'h1000000,
      32'h0,
      32'h4000000,
      32'h3000000,
      32'h0,
      32'h1000000,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'hAC070000,
      32'h71010000,
      32'h0,
      32'h10000000,
      32'h11000000,
      32'h28000000,
      32'hE4070000,
      32'h38000000,
      32'h55090000,
      32'hEDFE0DD0,
      32'h13,
      32'h30200073,
      32'h30063073,
      32'h8000613,
      32'h1858593,
      32'h597,
      32'hF1402573,
      32'h34151073,
      32'h52503,
      32'h4537,
      32'h5A023,
      32'hB505B3,
      32'h251513,
      32'hFE029EE3,
      32'h5A283,
      32'hFC1FF06F,
      32'h0,
      32'h0,
      32'h0,
      32'hFFDFF06F,
      32'h10500073,
      32'h30052073,
      32'h30451073,
      32'h800513,
      32'h30301073,
      32'h28463,
      32'h12F293,
      32'h4122D293,
      32'h301022F3,
      32'h30551073,
      32'hFC050513,
      32'h517,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h0,
      32'h6C0006F,
      32'hFE069AE3,
      32'hFFC62683,
      32'h460613,
      32'hD62023,
      32'h100693,
      32'h458613,
      32'h780006F,
      32'h50463,
      32'hF1402573,
      32'h20005B7};	// @[BootROM.scala:53:47]
  TLMonitor_43 monitor (	// @[Nodes.scala:24:25]
    .clock                (clock),
    .reset                (reset),
    .io_in_a_ready        (auto_in_d_ready),
    .io_in_a_valid        (auto_in_a_valid),
    .io_in_a_bits_opcode  (auto_in_a_bits_opcode),
    .io_in_a_bits_param   (auto_in_a_bits_param),
    .io_in_a_bits_size    (auto_in_a_bits_size),
    .io_in_a_bits_source  (auto_in_a_bits_source),
    .io_in_a_bits_address (auto_in_a_bits_address),
    .io_in_a_bits_mask    (auto_in_a_bits_mask),
    .io_in_a_bits_corrupt (auto_in_a_bits_corrupt),
    .io_in_d_ready        (auto_in_d_ready),
    .io_in_d_valid        (auto_in_a_valid),
    .io_in_d_bits_size    (auto_in_a_bits_size),
    .io_in_d_bits_source  (auto_in_a_bits_source)
  );
  assign auto_in_a_ready = auto_in_d_ready;
  assign auto_in_d_valid = auto_in_a_valid;
  assign auto_in_d_bits_size = auto_in_a_bits_size;
  assign auto_in_d_bits_source = auto_in_a_bits_source;
  assign auto_in_d_bits_data = (|(auto_in_a_bits_address[15:12])) ? 32'h0 : _GEN[auto_in_a_bits_address[11:2]];	// @[BootROM.scala:46:22, :51:34, :52:64, :53:{47,53}]
endmodule

