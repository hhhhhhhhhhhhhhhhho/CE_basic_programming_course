#include<stdio.h>
int sum(int a, int b);

int test_value = 3;

int main(){
    int A,B;
    int sum_result;
    scanf("%d %d",&A,&B);
    sum_result = sum(A,B);
    printf("sum result is : %d",sum_result);
}

int sum(int a,int b)
{
    int local_test=3;
    printf("sum 함수를 통과하고 있습니다.\n");
    return local_test;
}


