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

//This class is accessor to sram.
/*
class yayoi
{
    private:
        int *dataAddr[256];
    public:
        void init(void);
        void setData(int addr,int data);
        int getData(int addr);
};

void yayoi::init(void)
{
    //access initialize
    for(int i = 0; i < 64; i++)
    {
        dataAddr[i] = &(sram1.valueK[i]);
    }
    for(int i = 0; i < 64; i++)
    {
        dataAddr[i+64] = &(sram2.valueK[i]);
    }
    for(int i = 0; i < 64; i++)
    {
        dataAddr[i+128] = &(sram3.valueK[i]);
    }
}

void yayoi::setData(int addr,int data)
{
    //writer access
    if(addr >= 0 && addr < 192)
    {
        *(dataAddr[addr]) = data;
    }
}
int yayoi::getData(int addr)
{
    //reader access
    if(addr >=0 && addr < 192)
    {
        return *(dataAddr[addr]);
    }
    return -1;
}
*/

void initBuffer(void)
{
    //buffer initialize
    //yayoi yayoi1;
    int i;
    //yayoi1.init();
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
    //yayoi yayoi1;
    //yayoi1.init();
    //yayoi1.setData(addr,data);
    sram1.valueK[addr] = data;
}

void readAccess(int addr,int *data)
{
    //read from yayoi
    //yayoi yayoi1;
    //yayoi1.init();
    //*data = yayoi1.getData(addr);
    *data = sram1.valueK[addr];
}
