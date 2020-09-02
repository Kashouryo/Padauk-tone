#define PMS154C
#define DEVICE PMS154C
#define F_CPU 500000
#define TARGET_VDD_MV 4000
#define TARGET_VDD 4.0

#include <pdk/device.h>
#include <stdint.h>
#include "auto_sysclock.h"
#include "delay.h"

#include"tone.h"

unsigned char _sdcc_external_startup(void)
{
    AUTO_INIT_SYSCLOCK();
    AUTO_CALIBRATE_SYSCLOCK(TARGET_VDD_MV);
    return 0;
}


void main(void)
{
    //Mary had a little lamb
//    tonePA3(3,4);
//    tonePA3(2,4);
//    tonePA3(1,4);
//    tonePA3(2,4);
//    tonePA3(3,4);
//    tonePA3(3,4);
//    tonePA3(3,2);
//
//    tonePA3(2,4);
//    tonePA3(2,4);
//    tonePA3(2,2);
//
//    tonePA3(3,4);
//    tonePA3(5,4);
//    tonePA3(5,2);
//
//    tonePA3(3,4);
//    tonePA3(2,4);
//    tonePA3(1,4);
//    tonePA3(2,4);
//    tonePA3(3,4);
//    tonePA3(3,4);
//    tonePA3(3,4);
//
//    tonePA3(1,4);
//    tonePA3(2,4);
//    tonePA3(2,4);
//    tonePA3(3,4);
//    tonePA3(2,4);
//    tonePA3(1,2);

    //Music from an indoor water ride
    tonePA3(11,3);
    tonePA3(11,8);
    tonePA3(13,4);
    tonePA3(11,4);
    tonePA3(12,3);
    tonePA3(12,8);
    tonePA3(12,2);

    tonePA3(12,3);
    tonePA3(12,8);
    tonePA3(14,4);
    tonePA3(12,4);
    tonePA3(13,3);
    tonePA3(13,8);
    tonePA3(13,2);

    tonePA3(13,3);
    tonePA3(13,8);
    tonePA3(15,4);
    tonePA3(13,4);
    tonePA3(14,3);
    tonePA3(14,8);
    tonePA3(14,4);

    tonePA3(13,8);
    tonePA3(12,8);
    tonePA3(5,2);
    tonePA3(7,2);
    tonePA3(8,1);
    _delay_ms(500);
    while(1)
        ;
}
