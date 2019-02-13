
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
        char cmd[50000];
        char token[500]="#token#";
        sprintf(cmd, "curl -H \"Content-Type:application/json\" -X POST --data '{\"touser\":\"%s\",\"toparty\" : \"\",\"totag\":\"\",\"msgtype\":\"text\",\"agentid\":1000002,\"text\":{\"content\" : \"%s\"},\"safe\":0}' https://qyapi.weixin.qq.com/cgi-bin/message/send?access_token=%s",argv[1],argv[2],token);
        system(cmd);
        return 0;
}
