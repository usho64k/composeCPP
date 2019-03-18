#include <stdio.h>
#include <stdlib.h>

#include "cplusSample.h"

#ifdef __cplusplus
extern "C"
{
#endif
void main(void)
{
    int i = 0,mode;
    char buf[256];
    char strbuf2[256];
    char *strbuf = strbuf2;
    char t;

    int temp,temp2;
    mode = 1;

    initBuffer();
    //input string
    while(mode > 0)
    {
        t = getchar();
        i = 0;
        while(t != 0x5A)
        {
            buf[i] = t;
            i += (i < 256) ? 1: -256;
            t = getchar();
        }
        //string -> int(arguments)
        printf("strdata: [%s]\r\n",buf);
        
        mode = (int)strtol(buf,&strbuf,10);
        temp = (int)strtol(strbuf,&strbuf,10);
        temp2 = (int)strtol(strbuf,&strbuf,10);

        //values
        printf("mode:%d\r\n",mode);

        //access
        if(mode == 1)
        {
            writeAccess(temp,temp2);
            printf("write:[%d] , %d\r\n",temp,temp2);
        }
        else
        {
            readAccess(temp,&temp2);
            printf("read : %d\r\n",temp);
        }
    }
}
#ifdef __cplusplus
}
#endif
