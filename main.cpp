// Why this occured: CO_E_WRONG_SERVER_IDENTITY

#include "mbed.h"

InterruptIn button(PC_13); // Assuming button is connected to pin PA_5
volatile bool flag = false;

void button_isr() {
    flag = true;
}

int main() {
    button.rise(&button_isr); // Attach the interrupt function to the rising edge of the button
    while (1) {
        if (flag) {
            printf("Button pressed!\r\n");
            flag = false; // Reset the flag
        }
        // Other code and logic inside the while loop
    }

    return 0;
}




