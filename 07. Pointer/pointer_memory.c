#include<stdio.h>

int main(){
    int test_number = 12;
    int test_number_2 = 578;
    
    int *ptr = &test_number;

    printf("test number 출력입니다. : %d \n",*ptr);

    ptr++;

    printf("포인터의 주소를 증가시켜 출력합니다. %d \n",*ptr);

    printf("test number 2 출력입니다. %d\n",test_number_2);
}


