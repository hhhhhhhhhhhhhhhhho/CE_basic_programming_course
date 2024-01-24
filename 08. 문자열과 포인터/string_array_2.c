#include<stdio.h>

int main(){
    char string_init[] = {"HI MY NAME IS TAEJEONG\n"};

    printf("%s",string_init);

    for(int i=0; i<sizeof(string_init); i++) printf("%d 번째 문자는 %c 입니다.\n",i,string_init[i]);
}

