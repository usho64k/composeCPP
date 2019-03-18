#ifndef __SAMPLE_H__
#define __SAMPLE_H__

void initBuffer(void);
void writeAccess(int addr,int data);
void readAccess(int addr,int *data);

typedef enum enumrator_Addr
{
    DEF_STYLE1,
    DEF_STYLE2,
    DEF_STYLE3,
    DEF_NUM
}DEF_ADDR;

#endif
