#include<stdio.h>

int main(){
    int two_dim_array[10][10];
    int three_dim_array[3][3][3];
    int cnt = 0;

    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int z=0; z<3; z++){
                three_dim_array[i][j][z] = cnt;
                cnt++;
            }
        }
    }
    cnt=0;
    for(int i =0; i<10; i++){
        for(int j=0; j<10; j++){
            two_dim_array[i][j]=cnt;
            cnt++;
        }
    }
    printf("|-----------------------------------------------------------------------------------------------------------------------|");
    printf("\n");
    
    for(int i=0; i<10; i++){
        printf("|");
        for(int j=0; j<10; j++){
            
            printf("   [%d][%d]  |",i,j);
        }
        printf("\n");
        printf("|");
        printf("-----------------------------------------------------------------------------------------------------------------------|");
        printf("\n");
        printf("|");
        for(int j=0; j<10; j++){
            printf(" 0x%x|",&two_dim_array[i][j]);
        }
        printf("\n");
        printf("|-----------------------------------------------------------------------------------------------------------------------|");
        printf("\n");
    }

    printf("\n");

    for(int i=0; i<3; i++){
        printf("%d 번째 평면입니다\n",i);
        for(int j=0; j<3; j++){
            for(int z=0; z<3; z++){
            printf("   [%d][%d]  ",i,j);
            }
            printf("\n");
            for(int z=0; z<3; z++){
                printf("0x%x ",&three_dim_array[i][j][z]);
            }
            printf("\n");
        }
    
    }

}