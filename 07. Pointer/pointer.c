#include<stdio.h>

int main(){
    int test_variable = 10;
    int *ptr = &test_variable;

    printf("Test 변수의 주소는 0x%x\n",&test_variable);
    printf("Test 변수를 가리키는 ptr 포인터의 값은 0x%x\n",ptr);

    printf("Test 변수의 값은 %d 입니다. \n",test_variable);
    printf("ptr 포인터 변수가 가리키는 변수의 값은 %d 입니다. \n",*ptr);

    return 0;
}

