.PHONY: default
default: fibo
# CLOCK_PERIOD ?= 2.0
# RESET_DELAY ?= 10
# END_CYCLE ?= 800
TB ?= TestDriver

DEFINES = \
	-D PRINTF_COND=0 \
	-D STOP_COND=0 \
	-D RANDOMIZE_MEM_INIT \
	-D RANDOMIZE_REG_INIT \
	-D RANDOMIZE_GARBAGE_ASSIGN \
	-D RANDOMIZE_INVALID_ASSIGN

sim: 
	iverilog -o mid ./TestDriver.v ./memory.v  ./*.sv $(DEFINES)
fibo: sim
	vvp -n mid -lxt2

sim2: 
	iverilog -o mid ./riscv-tests/*.v ./memory.v  ./*.sv $(DEFINES)
asm: sim2
	vvp -n mid -lxt2