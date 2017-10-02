#include <stdio.h>
#define MAX_LEN 20
int main(int argv, char * argc[])
{
    char chaine[MAX_LEN+1];
    while (fgets(chaine, MAX_LEN+1, stdin) != NULL)
    {
        puts(chaine);
    }
}
