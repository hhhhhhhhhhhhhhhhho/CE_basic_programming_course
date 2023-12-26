#include<stdio.h>

void swap(int *a, int *b);

int main(){

    int A=2,B=4;
    swap(&A,&B);
    printf("A is = %d  B is = %d",A,B);
}
void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

