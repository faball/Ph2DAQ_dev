/*

    \file                          Definition.h
    \brief                         Definition File, listing the registers
    \author                        Nicolas PIERRE
    \version                       0.3
    Date of creation :             07/06/14
    Support :                      mail to : nico.pierre@icloud.com

*/

//------------------------------------------------------------------------------
//uHal Connection File

#define UHAL_CONNECTION_FILE "file:///afs/cern.ch/user/n/npierre/dev/settings/connections.xml"


//-----------------------------------------------------------------------------
//Glib Config Files

#define DEFAULT_GLIB_FILE  "settings/glib_settings.cfg"


//------------------------------------------------------------------------------
//Cbc Config Files

#define DEFAULT_FILE   "settings/default_file.txt"
#define FE0CBC0HOLE    "settings/FE0CBC0Hole.txt"
#define FE0CBC1        "settings/FE0CBC1.txt"
#define FE0CBC1HOLE    "settings/FE0CBC1Hole.txt"


//------------------------------------------------------------------------------
//I2C Parameters

#define I2C_CTRL_ENABLE   0x000009F4
#define I2C_CTRL_DISABLE  0
#define I2C_STROBE        1
#define I2C_M16B          0
#define I2C_MEM           1
#define I2C_WRITE_ADDR    0x09
#define I2C_READ_ADDR     0x06

#define I2C_SLAVE         0x5B
#define I2C_COMMAND       "user_wb_ttc_fmc_regs.i2c_command"
#define I2C_REPLY         "user_wb_ttc_fmc_regs.i2c_reply"
#define I2C_SETTINGS      "user_wb_ttc_fmc_regs.i2c_settings"

#define MAX_NB_LOOP       50

//------------------------------------------------------------------------------
//Board infos

#define BOARD_TYPE          "board_id"
#define FW_VERSION_MAJOR    "firm_id.firmware_major"
#define FW_VERSION_MINOR    "firm_id.firmware_minor"
#define FW_VERSION_BUILD    "firm_id.firmware_build"
#define FMC1_PRESENT        "status.fmc1_present"
#define FMC2_PRESENT        "status.fmc2_present"

    //FMC infos
#define FMC_USER_BOARD_ID "user_wb_ttc_fmc_regs.user_board_id"
#define FMC_USER_SYS_ID   "user_wb_ttc_fmc_regs.user_sys_id"
#define FMC_USER_VERSION  "user_wb_ttc_fmc_regs.user_version"

//------------------------------------------------------------------------------
//GLIB Useful Registers

//SRAM

    //SRAM IDs
#define SRAM1             "sram1"
#define SRAM2             "sram2"

    //SRAM user logic
#define SRAM1_USR_LOGIC   "ctrl_sram.sram1_user_logic"
#define SRAM2_USR_LOGIC   "ctrl_sram.sram2_user_logic"

    //SRAM End Readout
#define SRAM1_END_READOUT "user_wb_ttc_fmc_regs.pc_commands.SRAM1_end_readout"
#define SRAM2_END_READOUT "user_wb_ttc_fmc_regs.pc_commands.SRAM2_end_readout"

    //SRAM Full flags, reset when their end readout is 1
#define SRAM1_FULL        "user_wb_ttc_fmc_regs.flags.SRAM1_full"
#define SRAM2_FULL        "user_wb_ttc_fmc_regs.flags.SRAM2_full"

//GLIB

    //GLIBS settings
#define FAKE_DATA	  "user_wb_ttc_fmc_regs.pc_commands.CBC_DATA_GENE"
#define EXT_TRG		  "user_wb_ttc_fmc_regs.pc_commands.TRIGGER_SEL"

    //Hybrid type
#define HYBRID_TYPE   "user_wb_ttc_fmc_regs.new.hybrid_type"

//------------------------------------------------------------------------------
//CBC

    //CBC expectation
#define CBC_EXPECTED         "CBC_expected"

    //CBC DATA PACKET NUMBER
#define CBC_PACKET_NB        "user_wb_ttc_fmc_regs.pc_commands.CBC_DATA_PACKET_NUMBER"

    //CBC TEST PULSE VALID
#define CBC_TEST_PULSE_VALID "COMMISSIONNING_MODE_CBC_TEST_PULSE_VALID"

    //CBC Data generator
#define CBC_DATA_GENE        "user_wb_ttc_fmc_regs.pc_commands.CBC_DATA_GENE"

    //CBC_TRIGGER_ONE_SHOT
#define CBC_TRIGGER_1SHOT    "user_wb_ttc_fmc_regs.cbc_acquisition.CBC_TRIGGER_ONE_SHOT"

    //CBC stubdata latency adjustement
#define CBC_STUB_LATENCY     "cbc_stubdata_latency_adjust"
#define CBC_STUB_LATENCY_FE1 "cbc_stubdata_latency_adjust_fe1"
#define CBC_STUB_LATENCY_FE2 "cbc_stubdata_latency_adjust_fe2"

    //CBC I2C command acknoledgement
#define CBC_I2C_CMD_ACK      "cbc_i2c_cmd_ack_fe1"
#define CBC_I2C_CMD_ACK_FE1  "cbc_i2c_cmd_ack_fe1"
#define CBC_I2C_CMD_ACK_FE2  "cbc_i2c_cmd_ack_fe2"

    //CBC I2C command request
#define CBC_I2C_CMD_RQ       "cbc_i2c_cmd_rq_fe1"
#define CBC_I2C_CMD_RQ_FE1   "cbc_i2c_cmd_rq_fe1"
#define CBC_I2C_CMD_RQ_FE2   "cbc_i2c_cmd_rq_fe2"

    //CBC Hard Reset
#define CBC_HARD_RESET       "cbc_hard_reset_fe1"
#define CBC_HARD_RESET_FE1   "cbc_hard_reset_fe1"
#define CBC_HARD_RESET_FE2   "cbc_hard_reset_fe2"

    //CBC Fast Reset
#define CBC_FAST_RESET       "cbc_fast_reset_fe1"
#define CBC_FAST_RESET_FE1   "cbc_fast_reset_fe1"
#define CBC_FAST_RESET_FE2   "cbc_fast_reset_fe2"

//------------------------------------------------------------------------------
//Delays

    //Delay after fast reset
#define DELAY_AF_FAST_RESET "COMMISSIONNING_MODE_DELAY_AFTER_FAST_RESET"

    //Delay after L1A
#define DELAY_AF_L1A        "COMMISSIONNING_MODE_DELAY_AFTER_L1A"

    //Delay after test pulse
#define DELAY_AF_TEST_PULSE "COMMISSIONNING_MODE_DELAY_AFTER_TEST_PULSE"

//------------------------------------------------------------------------------
//Triggers

    //Break Trigger
#define BREAK_TRIGGER    "break_trigger"

    //Internal Trigger freq
#define INT_TRIGGER_FREQ "user_wb_ttc_fmc_regs.pc_commands.INT_TRIGGER_FREQ"

    //Trigger Select
#define TRIGGER_SELECT   "user_wb_ttc_fmc_regs.pc_commands.TRIGGER_SEL"

//------------------------------------------------------------------------------
//Events

    //Event number
#define EVENT_NUMBER     100

    //Event Size
#define EVENT_SIZE_32    4*9+6            //2 FE(FMC) x 2CBC (4*9) and  header (5) + 1

    //Event
#define OFFSET_BUNCH               8
#define WIDTH_BUNCH                24
#define OFFSET_ORBIT               1*32+8
#define WIDTH_ORBIT                24
#define OFFSET_LUMI                2*32+8
#define WIDTH_LUMI                 24
#define OFFSET_EVENT_COUNT         3*32+8
#define WIDTH_EVENT_COUNT          24
#define OFFSET_EVENT_COUNT_CBC     4*32+8
#define WIDTH_EVENT_COUNT_CBC      3*8
#define OFFSET_FE_EVENT            5*4
#define WIDTH_FE_EVENT             9*4*2            //CBC_NCHAR*2
#define OFFSET_TDC                 5*32+9*4*2       //5*32+WIDTH_FE_EVENT
#define WIDTH_TDC                  32
#define FE_NCHAR                   9*4*2            //CBC_NCHAR*2


    //Cbc Event
#define NSENSOR                   254
#define OFFSET_ERROR              0
#define WIDTH_ERROR               2
#define OFFSET_PIPELINE_ADDRESS   2       //OFFSET_ERROR + WIDTH_ERROR
#define WIDTH_PIPELINE_ADDRESS    8
#define OFFSET_CBCDATA            2+8     //OFFSET_PIPELINE_ADDRESS + WIDTH_PIPELINE_ADDRESS
#define WIDTH_CBCDATA             254     //NSENSOR
#define OFFSET_GLIBFLAG           10+254  //OFFSET_CBCDATA + WIDTH_CBCDATA
#define WIDTH_GLIBFLAG            12
#define OFFSET_CBCSTABDATA        264+12  //OFFSET_GLIBFLAG + WIDTH_GLIBFLAG
#define WIDTH_CBCSTABDATA         12
#define CBC_NCHAR                 9*4

//------------------------------------------------------------------------------
//Others

    //PC Config OK
#define PC_CONFIG_OK    "user_wb_ttc_fmc_regs.pc_commands.PC_config_ok"

    //Spurious frame
#define SPURIOUS_FRAME  "user_wb_ttc_fmc_regs.pc_commands.SPURIOUS_FRAME"

    //Force BG0 Start
#define FORCE_BG0_START "user_wb_ttc_fmc_regs.pc_commands2.force_BG0_start"

    //CMD_START_VALID Flag
#define CMD_START_VALID "user_wb_ttc_fmc_regs.status_flags.CMD_START_VALID"

    //FE expectation
#define FE_EXPECTED     "FE_expected"

    //RQ
#define RQ              "COMMISSIONNING_MODE_RQ"

    //Acquisition mode
#define ACQ_MODE        "user_wb_ttc_fmc_regs.pc_commands.ACQ_MODE"

    //Clock shift
#define CLOCK_SHIFT     "user_wb_ttc_fmc_regs.pc_commands2.clock_shift"

    //Negative logic
#define NEG_LOGIC_CBC   "user_wb_ttc_fmc_regs.pc_commands2.negative_logic_CBC"
#define NEG_LOGIC_STTS  "user_wb_ttc_fmc_regs.pc_commands2.negative_logic_sTTS"

    //Polarity
#define POLARITY        "user_wb_ttc_fmc_regs.pc_commands2.polarity_tlu"

    //Packet size
#define PACKET_SIZE      32

    //Time out for stack writing
#define TIME_OUT         5

//------------------------------------------------------------------------------
