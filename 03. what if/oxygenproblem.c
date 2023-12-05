#include<stdio.h>

int main(void)
{
    int oxygen=0;
    int tank=0;
    int fish_status=0; // 0 이면 안배고픔, 1이면 배고픔.
    while(1){
        if(oxygen<9){
            oxygen = oxygen+1;
        }
        else{
            printf("수조에 산소가 충분해요\n");
        }

        if(tank<50){
            while(tank<=50){

                if(fish_status==1){
                    printf("물고기가 배고파하니, 급수를 멈추고 밥을 줄게요\n");
                    break;
                }

                tank=tank+1;
                printf("수조탱크에 물이 %d 만큼 채워졌습니다.\n",tank);
            }

            if(fish_status==1){
                printf("물고기에게 밥을 줬습니다.\n");
                fish_status=0;
            }
        }
        else{
            printf("수조에 물이 충분합니다.");
        }
    }
    return 0;
}

