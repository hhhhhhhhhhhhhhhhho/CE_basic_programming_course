#include<stdio.h>

int main(){
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr_array=array;

    for(int i=0; i<10; i++)
        printf("인덱스를 활용한 배열 직접 접근 출력입니다 : %d \n",array[i]);

    for(int i=0; i<10; i++){
        printf("포인터를 활용한 배열 지시자 접근 출력입니다. : %d \n",*ptr_array);
        ptr_array++; // 포인터가 가리키는 값 [ 주소 ] 를 가리키는 값의 사이즈 ( 4바이트 ) 만큼 증가시킴.
    }
}


