// ----------------------------------------------------------------------------
/*!
 * @file		fuelgauge_conf.h
 * @author    	John Steggall
 * @date       	31 March 2021
 * @brief       Header file containing defines for the LC709203f fuel gauge
 * 				IC registers and contents.
 *
 */
// ----------------------------------------------------------------------------

#ifndef FUELGAUGE_CONF_H_
#define FUELGAUGE_CONF_H_

#define FG_MEM_ADDR_BEFORE_RSOCC		0x04u
#define FG_MEM_ADDR_THERMB				0x06u
#define FG_MEM_ADDR_INIT_RSOC			0x07u
#define FG_MEM_ADDR_CELL_TEMP			0x08u
#define FG_MEM_ADDR_CELL_MV				0x09u
#define FG_MEM_ADDR_CURR_DIR			0x0Au
#define FG_MEM_ADDR_APA					0x0Bu
#define FG_MEM_ADDR_APT					0x0Cu
#define FG_MEM_ADDR_RSOC				0x0Du
#define FG_MEM_ADDR_ITE					0x0Fu	/* RSOC Pt1 */
#define FG_MEM_ADDR_IC_VERSION			0x11u
#define FG_MEM_ADDR_PARAM_NO_SET		0x12u
#define FG_MEM_ADDR_ALARM_RSOC			0x13u
#define FG_MEM_ADDR_ALARM_CELLV			0x14u
#define FG_MEM_ADDR_POWER_MODE			0x15u
#define FG_MEM_ADDR_THERM_TYPE			0x16u
#define FG_MEM_ADDR_PARAM_NO			0x1Au

#define INITIALISE_RSOC					0xAA55u
#define CURR_DIR_AUTO					0u
#define CURR_DIR_CHARGE					1u
#define CURR_DIR_DISCHARGE				0xFFFFu
#define BATT_PROFILE_0					0u
#define BATT_PROFILE_1					1u
#define ALARM_DISABLE					0u
#define POWER_MODE_OPERATIONAL			1u
#define POWER_MODE_SLEEP				2u
#define CELL_TEMP_OFS					0x0AACu

#define THERM_TYPE_I2C					0u
#define THERM_TYPE_NTC					1u


#endif /* FUELGAUGE_CONF_H_ */
