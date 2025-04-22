CXX := g++
VERILATOR := verilator
VERILATOR_FLAGS := --cc --exe --build -Wall --trace
SRC := rtl/conv_encoder.sv tb/testbench.sv
DPI_OBJS := cpp/conv_encoder.cpp
INCLUDES := -I$(PWD)/cpp

all: compile run

compile:
	$(VERILATOR) $(VERILATOR_FLAGS) $(SRC) $(DPI_OBJS) $(INCLUDES)

run:
	./obj_dir/Vtestbench

wave:
	gtkwave waveform.vcd &  # Для просмотра временных диаграмм

clean:
	rm -rf obj_dir waveform.vcd

.PHONY: all compile run wave clean