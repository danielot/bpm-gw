######################################################################
#
# File name : board_simulate.do
# Created on: Thu Sep 24 20:15:17 CEST 2015
#
# Auto generated by Vivado for 'behavioral' simulation
#
######################################################################
vsim +TESTNAME=tf64_pcie_axi -t 1ps +notimingchecks -lib xil_defaultlib board_opt

view wave
view structure
view signals

log -r /board/EP/bpm_pcie_i/theTlpControl/*
log /board/EP/bpm_pcie_i/DDRs_ctrl_module/*
log /board/EP/bpm_pcie_i/*
log /board/*

radix hex

set NumericStdNoWarnings 1
set StdArithNoWarnings 1

#add signals to wave window
do wave.do

run -all
