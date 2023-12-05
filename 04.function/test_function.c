#include<stdio.h>
void compare(int a, int b);

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    compare(A,B);
}

void compare(int a,int b)
{
     if(a>b){
        printf(">");
    }
    if(a<b){
        printf("<");
    }
    if(a==b){
        printf("==");
    }
}


