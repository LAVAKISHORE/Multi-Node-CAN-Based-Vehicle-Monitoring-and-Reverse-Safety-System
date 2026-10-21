#include "major_type.h"
volatile u8 mode = 0;


// Indicator switch status updated by the interrupt routines.
volatile u8 left_flag = 0;
volatile u8 right_flag = 0;


// Indicates which CAN message needs to be transmitted.
// 0 = No transmission
// 1 = Indicator command
// 2 = Vehicle mode
volatile u8 tx_flag = 0;


// Stores the reverse-alert information received from the Reverse Node.
volatile u8 reverse_alert = 0;


// Stores the current indicator command.
// 'L' = Left indicator
// 'R' = Right indicator
// 'S' = Indicators OFF
volatile u8 indicator_cmd = 'S';
