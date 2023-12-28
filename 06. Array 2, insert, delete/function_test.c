#include<stdio.h>

int main()
{
    char test_array[4];

    for(int i=0; i<4; i++)
        scanf("%c",&test_array[i]);

    for(int i=0; i<4; i++)
        printf("%c",test_array[i]);

    printf("\n");

    for(int i=0; i<4; i++)
        printf("%c 's Adress is : 0x%x \n",test_array[i],&test_array[i]);
}

