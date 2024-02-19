.PHONY: default
default: waveform
CLOCK_PERIOD ?= 2.0
RESET_DELAY ?= 100
END_CYCLE ?= 500
TB ?= TestDriver

DEFINES = \
	-D CLOCK_PERIOD=$(CLOCK_PERIOD) \
	-D RESET_DELAY=$(RESET_DELAY) \
	-D END_CYCLE=$(END_CYCLE) \
	-D PRINTF_COND=$(TB).printf_cond \
	-D STOP_COND=!$(TB).reset \
	-D RANDOMIZE_MEM_INIT \
	-D RANDOMIZE_REG_INIT \
	-D RANDOMIZE_GARBAGE_ASSIGN \
	-D RANDOMIZE_INVALID_ASSIGN

sim: 
	iverilog -o mid ./*.v  ./*.sv $(DEFINES)
waveform: sim
	vvp -n mid -lxt2