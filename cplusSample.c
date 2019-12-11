#include <stdio.h>

#include "cplusSample.h"

//This variable data is mapped in sram.
typedef struct settingData
{
    int valueK[64];
}SRAM_A;

SRAM_A sram1;
SRAM_A sram2;
SRAM_A sram3;


void initBuffer(void)
{
    //buffer initialize
    int i;
    for(i = 0; i < 64; i++)
    {
        sram1.valueK[i] = 0;
        sram2.valueK[i] = 0;
        sram3.valueK[i] = 0;
    }

}

void writeAccess(int addr,int data)
{
    //access to yayoi
    sram1.valueK[addr] = data;
}

void readAccess(int addr,int *data)
{
    //read from yayoi
    *data = sram1.valueK[addr];
}
