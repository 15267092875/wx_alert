#include <stdlib.h>
int main(int argc, char *argv[])
{
        char cmd[50000];
        sprintf(cmd,"curl -X POST -s 'https://qyapi.weixin.qq.com/cgi-bin/gettoken?corpid=%s&corpsecret=%s' | sed 's/{\"errcode\":0,\"errmsg\":\"ok\",\"access_token\":\"//g' | sed 's/\",\"expires_in\":7200}//g' ",argv[1],argv[2]);
        system(cmd);
        return 0;
}
