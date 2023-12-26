#include<stdio.h>

int main()
{
    char test_array[4];

    test_array[0]='L';
    test_array[1]='O';
    test_array[2]='V';
    test_array[3]='E';

    printf("Index 0 's Address is : 0x%x\n",&test_array[0]);
    printf("Index 1 's Address is : 0x%x\n",&test_array[1]);
    printf("Index 2 's Address is : 0x%x\n",&test_array[2]);
    printf("Index 3 's Address is : 0x%x\n",&test_array[3]);
    
}