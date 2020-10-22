#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "msp432_boostxl_init.h"

uint16_t processSample(uint16_t x) {
    return 2*x;
}

#include <stdio.h>

int main(void) {
    WDT_A_hold(WDT_A_BASE);

    msp432_boostxl_init_intr(FS_32000_HZ, BOOSTXL_J1_2_IN, processSample);
    msp432_boostxl_run();

    return 1;
}
