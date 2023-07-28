// Why this occured: CO_E_WRONG_SERVER_IDENTITY



#include "mbed.h"

    int flag = 0;

// main() runs in its own thread in the OS
InterruptIn bttn(PC_13);
    void bttn_interrupt(){
    printf("bttn pressed /r/n");
    flag = 1;
    }
int main()
{   
    bttn.fall(&bttn_interrupt);
   while (1) {
        if (flag) {
            printf("Flag is set!\n");
            flag = 0; // Reset the flag
        }
        // Other code and logic inside the while loop
    }

    return 0;


    }


