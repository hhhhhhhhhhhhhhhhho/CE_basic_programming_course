#include<stdio.h>

int main(){
    int test_value = 50;
    float test_value_float = 0.4;
    double test_value_double = 0.00000000001;
    char test_value_char = 'a';

    printf("test value int : %d float : %f double : %lf char : %c\n\n",test_value,test_value_float,test_value_double,test_value_char);


    printf("test_value address is : 0x%x      ",&test_value);


}


