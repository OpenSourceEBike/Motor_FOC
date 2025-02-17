/*
 * config.h
 *
 *  Automatically created by Lishui Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_
#include "stdint.h"

// calibration factors for voltage and current
#define CAL_BAT_V 14 	// ADC counts * CAL_BAT_V = Battery voltage in mV
#define CAL_I 38		// ADC counts * CAL_I = current in mA

//#define ADCTHROTTLE
#define THROTTLEOFFSET 45
#define THROTTLEMAX 175
#define BRAKEOFFSET 50
#define BRAKEMAX 190

// speed limits for invividual modes in kph
#define SPEEDLIMIT_ECO 6
#define SPEEDLIMIT_NORMAL 20
#define SPEEDLIMIT_SPORT 50

// motor current limits for invividual modes in mA
// note that hacked firmware allows up to 55amps motor phase current
#define PH_CURRENT_MAX_ECO 20000
#define PH_CURRENT_MAX_NORMAL 30000
#define PH_CURRENT_MAX_SPORT 40000

// motor current limit for regen in mA
#define REGEN_CURRENT 10000

// maximum current for field weakening in mA
#define FIELD_WEAKNING_CURRENT_MAX 1000 //max id

// maximum battery currents in mA
#define BATTERYCURRENT_MAX 10000 // 10A, 36V battery, 350W limit
#define REGEN_CURRENT_MAX 6000

// battery voltage limits in mV
// #define BATTERYVOLTAGE_MIN 33000

#define BATTERYVOLTAGE_MIN 30000 // for development only

#define BATTERYVOLTAGE_MAX 42000

#endif /* CONFIG_H_ */
