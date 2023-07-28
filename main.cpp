// Why this occured: CO_E_WRONG_SERVER_IDENTITY



#include "mbed.h"

// main() runs in its own thread in the OS
InterruptIn bttn(PC_13);
    void bttn_interrupt(){
    printf("bttn pressed /r/n");
    }
int main()
{   
    bttn.fall(&bttn_interrupt);
    while (true) {

    }
}

