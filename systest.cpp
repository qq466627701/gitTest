#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int GetCacheCmd(const char *cmd,int cmdnum,char *buff) {
    //获取截断字符
    int i = 0;
    while(cmd[cmdnum]!='\n'){
        while(cmd[cmdnum]!=' ')
        {
            //通过给&cmdbuff的地址传递字符
            buff[i++]=cmd[cmdnum++];
            if(cmd[cmdnum]=='\n')
            {
                return 0;//enter means task end； callback val0
            }
            if(cmd[cmdnum]==' ')
            {
                buff[i]='\0';
                return 1;//space means not end； callback val1
            }
        }
        
    }
    return 0;
}
void StartIpmitool(int n)
{
    while
}

int main()
{
    //todo 使用接口 获取ipmitool cmd example：
    // 如果返回的值为ipmitool -l -H
    char buff[1024];
    const char *cmd = "ipmitool -i lanplus -H -U -P raw";
    int n = 0;

    

    int status = system(cmd);//匹配成功会返回 0 ；否则返回不同的错误代码 
    printf("system request code:%d",status);
    return 0;
}