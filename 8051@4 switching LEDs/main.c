#include <reg51.h>  // Include the 8051 header file

sbit SWITCH = P1^0;  // Define switch on P1.0 (active low)
sbit LED = P2^0;     // Define LED on P2.0

void main() {
    LED = 0;  // Initially, turn off the LED

    while (1) {  // Infinite loop to keep checking the switch state
        if (SWITCH == 0) {   // If the switch is pressed (active low)
            LED = 1;         // Turn on the LED
        } else {              
            LED = 0;         // If the switch is not pressed, turn off the LED
        }
    }
}
