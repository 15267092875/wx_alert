#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        system("curl -X POST -s 'https://qyapi.weixin.qq.com/cgi-bin/gettoken?corpid=##corpid##&corpsecret=##corpsecret##' | sed 's/{\"errcode\":0,\"errmsg\":\"ok\",\"access_token\":\"//g' | sed 's/\",\"expires_in\":7200}//g' ");
	printf("\n");
        return 0;
}
