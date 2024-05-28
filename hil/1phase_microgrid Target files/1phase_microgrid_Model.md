Model 1phase_microgrid


REM *****************************************:


REM * Common entries:


REM *****************************************:


REM Setting the simulation time step...
rtds_write 0x00000000 0x000000A0


REM External SFP Link
rtds_write 0x00000007 0x00000000


REM Fast SFP Send


REM Converter solvers setup


REM Reset analog and digital outputs on simulation stop
rtds_write 0x00C00700 0x00000001
rtds_write 0x00F00000 0x00000001


REM Module block enable
rtds_write 0x00000003 0x00010000


REM LUT solver inputs...
rtds_write 0x01000000 0x00000000


REM HSSL configuration files...


REM Parallel DTV configuration...


REM *****************************************:


REM * SPC0 entries:


REM *****************************************:


REM SPC0 Topology Selector (TS) initialization...
rtds_file_write 0x08180000 SPC0_red_table.txt
rtds_write 0x08100020 0x0000000A
rtds_write 0x08100021 0x0000000F
rtds_write 0x08100023 0x00000000
rtds_write 0x08100024 0x00000000
rtds_write 0x08100025 0x00000000
rtds_write 0x08100026 0x00000000
rtds_write 0x08100027 0x00000000
rtds_write 0x0810002E 0x00000000
rtds_write 0x0810002F 0x00000000
rtds_write 0x08100030 0x00000000
rtds_write 0x08100031 0x00000000
rtds_write 0x08100032 0x00000001
rtds_write 0x08100033 0x0000000A
rtds_write 0x08100034 0x00000001
rtds_write 0x08100035 0x00000001
rtds_write 0x08100036 0x00000000
rtds_write 0x08100037 0x00000000
rtds_write 0x08100038 0x00000000
rtds_write 0x08100039 0x00000000
rtds_file_write 0x08140000 1ph_inverter_r3_pn_np_imem.txt
rtds_file_write 0x08142000 1ph_inverter_r3_pn_np_lut.txt
rtds_write 0x08100040 0x00000001
rtds_write 0x08100041 0x00000000
rtds_write 0x08100043 0x00000000
rtds_write 0x08100044 0x00000000
rtds_write 0x08100045 0x00000000
rtds_write 0x08100046 0x00000000
rtds_write 0x08100047 0x00000000
rtds_write 0x0810004E 0x00000000
rtds_write 0x0810004F 0x00000000
rtds_write 0x08100050 0x00000000
rtds_write 0x08100051 0x00000000
rtds_write 0x08100052 0x00000000
rtds_write 0x08100053 0x00000000
rtds_write 0x08100054 0x00000000
rtds_write 0x08100055 0x00000000
rtds_write 0x08100056 0x00000000
rtds_write 0x08100057 0x00000000
rtds_write 0x08100058 0x00000000
rtds_write 0x08100059 0x00000000
rtds_file_write 0x08148000 trivial_imem.txt
rtds_file_write 0x0814A000 trivial_lut.txt
rtds_write 0x08100060 0x00000001
rtds_write 0x08100061 0x00000000
rtds_write 0x08100063 0x00000000
rtds_write 0x08100064 0x00000000
rtds_write 0x08100065 0x00000000
rtds_write 0x08100066 0x00000000
rtds_write 0x08100067 0x00000000
rtds_write 0x0810006E 0x00000000
rtds_write 0x0810006F 0x00000000
rtds_write 0x08100070 0x00000000
rtds_write 0x08100071 0x00000000
rtds_write 0x08100072 0x00000000
rtds_write 0x08100073 0x00000000
rtds_write 0x08100074 0x00000000
rtds_write 0x08100075 0x00000000
rtds_write 0x08100076 0x00000000
rtds_write 0x08100077 0x00000000
rtds_write 0x08100078 0x00000000
rtds_write 0x08100079 0x00000000
rtds_file_write 0x08150000 trivial_imem.txt
rtds_file_write 0x08152000 trivial_lut.txt


REM SPC0 Variable Delay initialization...
rtds_write 0x08100001 0x0


REM SPC0 Output voltage compare mode...
rtds_write 0x08100005 0x00000000
rtds_write 0x08100006 0x00000005


REM SPC0 Matrix multiplier initialization...
rtds_file_write 0x08000000 SPC0_Com_Word.txt
rtds_file_write 0x08020000 SPC0_Com_LUT.txt
rtds_file_write 0x08080000 SPC0_MAC0.txt
rtds_file_write 0x08081000 SPC0_MAC1.txt
rtds_file_write 0x08082000 SPC0_MAC2.txt
rtds_file_write 0x08083000 SPC0_MAC3.txt
rtds_file_write 0x08084000 SPC0_MAC4.txt
rtds_file_write 0x08085000 SPC0_MAC5.txt
rtds_file_write 0x08086000 SPC0_MAC6.txt
rtds_file_write 0x08087000 SPC0_MAC7.txt
rtds_write 0x08100004 0x00000000


REM SPC0 Contactors initialization...


REM SPC0 GDS compensation settings...
rtds_write 0x080C0000 0x00000001
rtds_write 0x080C0001 0x00000003
rtds_write 0x080C0004 0x3BCCCCCC
rtds_write 0x080C0005 0xCCCD0000
rtds_write 0x08100000 0x000000A0
rtds_write 0x08100007 0x00000000


REM SPC0 FSM digital input pin assignments...
rtds_write 0x08100028 0x00000000
rtds_write 0x08100029 0x00000000
rtds_write 0x0810002A 0x00000020
rtds_write 0x0810002B 0x00000021
rtds_write 0x0810002C 0x00000022
rtds_write 0x0810002D 0x00000023
rtds_write 0x08100022 0x00000000


REM SPC0 Comparators initialization...


REM SPC0 DTSM initialization...
rtds_write 0x08280000 0x00000000
rtds_write 0x08280080 0x00000001
rtds_write 0x08280180 0x00000000
rtds_write 0x08280200 0x00000000
rtds_write 0x08280280 0x00000001
rtds_write 0x08280300 0x00000000
rtds_write 0x08280001 0x00000000
rtds_write 0x08280081 0x00000001
rtds_write 0x08280181 0x00000000
rtds_write 0x08280201 0x00000000
rtds_write 0x08280281 0x00000001
rtds_write 0x08280301 0x00000000


REM SPC0 Time Varying Elements initialization...


REM *****************************************:


REM * SPC1 entries:


REM *****************************************:


REM SPC1 Topology Selector (TS) initialization...
rtds_file_write 0x08580000 SPC1_red_table.txt
rtds_write 0x08500020 0x0000000A
rtds_write 0x08500021 0x0000000F
rtds_write 0x08500023 0x00000001
rtds_write 0x08500024 0x00000000
rtds_write 0x08500025 0x00000000
rtds_write 0x08500026 0x00000000
rtds_write 0x08500027 0x00000000
rtds_write 0x0850002E 0x00000000
rtds_write 0x0850002F 0x00000000
rtds_write 0x08500030 0x00000000
rtds_write 0x08500031 0x00000000
rtds_write 0x08500032 0x00000001
rtds_write 0x08500033 0x0000000A
rtds_write 0x08500034 0x00000001
rtds_write 0x08500035 0x00000001
rtds_write 0x08500036 0x00000000
rtds_write 0x08500037 0x00000000
rtds_write 0x08500038 0x00000000
rtds_write 0x08500039 0x00000000
rtds_file_write 0x08540000 1ph_inverter_r3_pn_np_imem.txt
rtds_file_write 0x08542000 1ph_inverter_r3_pn_np_lut.txt
rtds_write 0x08500040 0x00000001
rtds_write 0x08500041 0x00000000
rtds_write 0x08500043 0x00000000
rtds_write 0x08500044 0x00000000
rtds_write 0x08500045 0x00000000
rtds_write 0x08500046 0x00000000
rtds_write 0x08500047 0x00000000
rtds_write 0x0850004E 0x00000000
rtds_write 0x0850004F 0x00000000
rtds_write 0x08500050 0x00000000
rtds_write 0x08500051 0x00000000
rtds_write 0x08500052 0x00000000
rtds_write 0x08500053 0x00000000
rtds_write 0x08500054 0x00000000
rtds_write 0x08500055 0x00000000
rtds_write 0x08500056 0x00000000
rtds_write 0x08500057 0x00000000
rtds_write 0x08500058 0x00000000
rtds_write 0x08500059 0x00000000
rtds_file_write 0x08548000 trivial_imem.txt
rtds_file_write 0x0854A000 trivial_lut.txt
rtds_write 0x08500060 0x00000001
rtds_write 0x08500061 0x00000000
rtds_write 0x08500063 0x00000000
rtds_write 0x08500064 0x00000000
rtds_write 0x08500065 0x00000000
rtds_write 0x08500066 0x00000000
rtds_write 0x08500067 0x00000000
rtds_write 0x0850006E 0x00000000
rtds_write 0x0850006F 0x00000000
rtds_write 0x08500070 0x00000000
rtds_write 0x08500071 0x00000000
rtds_write 0x08500072 0x00000000
rtds_write 0x08500073 0x00000000
rtds_write 0x08500074 0x00000000
rtds_write 0x08500075 0x00000000
rtds_write 0x08500076 0x00000000
rtds_write 0x08500077 0x00000000
rtds_write 0x08500078 0x00000000
rtds_write 0x08500079 0x00000000
rtds_file_write 0x08550000 trivial_imem.txt
rtds_file_write 0x08552000 trivial_lut.txt


REM SPC1 Variable Delay initialization...
rtds_write 0x08500001 0x0


REM SPC1 Output voltage compare mode...
rtds_write 0x08500005 0x00000000
rtds_write 0x08500006 0x00000005


REM SPC1 Matrix multiplier initialization...
rtds_file_write 0x08400000 SPC1_Com_Word.txt
rtds_file_write 0x08420000 SPC1_Com_LUT.txt
rtds_file_write 0x08480000 SPC1_MAC0.txt
rtds_file_write 0x08481000 SPC1_MAC1.txt
rtds_file_write 0x08482000 SPC1_MAC2.txt
rtds_file_write 0x08483000 SPC1_MAC3.txt
rtds_file_write 0x08484000 SPC1_MAC4.txt
rtds_file_write 0x08485000 SPC1_MAC5.txt
rtds_file_write 0x08486000 SPC1_MAC6.txt
rtds_file_write 0x08487000 SPC1_MAC7.txt
rtds_write 0x08500004 0x00000000


REM SPC1 Contactors initialization...


REM SPC1 GDS compensation settings...
rtds_write 0x084C0000 0x00000001
rtds_write 0x084C0001 0x00000004
rtds_write 0x084C0004 0x3BCCCCCC
rtds_write 0x084C0005 0xCCCD0000
rtds_write 0x08500000 0x000000A0
rtds_write 0x08500007 0x00000000


REM SPC1 FSM digital input pin assignments...
rtds_write 0x08500028 0x00000000
rtds_write 0x08500029 0x00000000
rtds_write 0x0850002A 0x00000024
rtds_write 0x0850002B 0x00000025
rtds_write 0x0850002C 0x00000026
rtds_write 0x0850002D 0x00000027
rtds_write 0x08500022 0x00000000


REM SPC1 Comparators initialization...


REM SPC1 DTSM initialization...
rtds_write 0x08680000 0x00000000
rtds_write 0x08680080 0x00000001
rtds_write 0x08680180 0x00000000
rtds_write 0x08680200 0x00000000
rtds_write 0x08680280 0x00000001
rtds_write 0x08680300 0x00000000
rtds_write 0x08680001 0x00000000
rtds_write 0x08680081 0x00000001
rtds_write 0x08680181 0x00000000
rtds_write 0x08680201 0x00000000
rtds_write 0x08680281 0x00000001
rtds_write 0x08680301 0x00000000


REM SPC1 Time Varying Elements initialization...
*****************************************:


REM SP data configuration...
*****************************************:


REM Setting the capture sample step...


REM post SP Init calculation...
rtds_write  
rtds_write 0x00000041 0x000011C1
rtds_write 0x00000005 0x00000002
rtds_write 0x00000043 0x00002710
rtds_write 0x00000042 0x000001F3
rtds_write 0x0000000A 0x00000001


REM CoProcessors uBlaze_1, uBlaze_2 and uBlaze_3 configuration
glbl_write 0x40800000 0x7
glbl_write 0xf8000008 0xdf0d


REM CoProcessor ARM_1 configuration...
glbl_write 0xfffffff0 0xffffff2c  
glbl_write 0xFFFFFF00 0xe3e0000f
glbl_write 0xFFFFFF04 0xe3a01000
glbl_write 0xFFFFFF08 0xe5801000
glbl_write 0xFFFFFF0C 0xe320f002
glbl_write 0xFFFFFF10 0xe5902000
glbl_write 0xFFFFFF14 0xe1520001
glbl_write 0xFFFFFF18 0x0afffffb
glbl_write 0xFFFFFF1C 0xe1a0f002
glbl_write 0x00000000 0xe3e0f0ff
glbl_write 0xf8000244 0x2
glbl_write 0xf8000244 0x22
glbl_write 0xf8000244 0x20
glbl_write 0xf8000244 0x0
glbl_file_write 0xfffc0000 user_sp_cpu_0_imem.bin


REM Communication peripherals reset and load sequence
sys_command 0x0


REM enable ETH0 Intr on Core0 CPU
glbl_write 0xF8F01834 0x01010101
sys_command 0x1
glbl_write 0x40800000 0x7
glbl_write 0xfffffff0 0xfffc0000


REM Restart counter for collected Linux OS communication apps
app_file_write 0x0 app_init


REM Clear the /mnt/ext_files. directory
file_write_custom clean_ext_files None
rtds_write 0x00000027 0x000000A0
rtds_write 0x00000040 0x00FFFFFF