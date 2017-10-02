#include <stdio.h>
#define MAX_LEN 20
int main(int argv, char * argc[])
{
    int val[MAX_LEN + 1];
    int i;
    for(i=0;i<MAX_LEN;i++)
    {
        val[i] = 1;
    }
    for(i=0;i<MAX_LEN;i++)
    {
        printf("%d \n", val[i]);
    }
}
