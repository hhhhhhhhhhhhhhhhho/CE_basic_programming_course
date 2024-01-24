#include<stdio.h>

int main()
{
    int i;
    char name[22];

    for(i=0; i<22; i++) scanf("%c",&name[i]);

    for(i=0; i<22; i++) printf("%c",name[i]);
}

