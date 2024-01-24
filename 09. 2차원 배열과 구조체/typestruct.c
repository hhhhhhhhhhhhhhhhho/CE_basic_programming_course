#include<stdio.h>

typedef struct MID_TERM_SCORE
{
    char name[10];/* data */
    int grade;
    char number[10];
    int korean_score;
    int math_score;
    int english_score;
    int science_score;
}MID_TERM_SCORE;

int main(){
    MID_TERM_SCORE my_class;
    printf("이름을 입력하세요 : ");
    scanf("%s",my_class.name);
    printf("학년을 입력하세요 : ");
    scanf("%d",&my_class.grade);
    getchar();
    printf("학번을 입력하세요 : ");
    scanf("%s",my_class.number);
    printf("국어 성적을 입력하세요 : ");
    scanf("%d",&my_class.korean_score);
    printf("수학 성적을 입력하세요 : ");
    scanf("%d",&my_class.math_score);
    printf("영어 성적을 입력하세요 : ");
    scanf("%d",&my_class.english_score);
    printf("과학 성적을 입력하세요 : ");
    scanf("%d",&my_class.science_score);


    printf("%s\n",my_class.name);
    printf("%d\n",my_class.grade);
    printf("%s\n",my_class.number);
    printf("%d\n",my_class.korean_score);
    printf("%d\n",my_class.math_score);
    printf("%d\n",my_class.english_score);
    printf("%d\n",my_class.science_score);


}

