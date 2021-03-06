#include"solution.h"
void main() 
{
    int b1;
    b1 = mkfifo("pipeD",0666);
    if(a1<0)
        printf("\npipeD was not created");
    else
        printf("\npipeD created");
    int b2;
    b2 = mkfifo("pipeE",0666);
    if(b2<0)
        printf("\npipeE was not created");
    else
        printf("\npipeE is created\n");
}
