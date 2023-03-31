// 숙박관리프로그램

#include<stdio.h>


#define FLOOR 10
#define ROOMS 10

void main(){
    
    int sel = 0;
    int room;
    int roomManager[FLOOR][ROOMS];
    printf("[숙 박 관 리 프 로 그 램] \n\n");
    for (int i=0; i<FLOOR; i++){
        for (int j=0; j<ROOMS; j++)
            roomManager[i][j] = 0;
    }
    


    while(sel != 4){
        printf("메뉴를 입력해주세요 : 1.입실 2.퇴실 3.현황 4.종료 : ");
        scanf("%d", &sel);
        
        switch(sel)
        {
            case 1: 
                printf("입십을 처리합니다.\n");
                printf("입실할 호실의 번호를 입력해주세요 : ");

                
                scanf("%d", &room);
                if (roomManager[room/100][room%100] = 1)
                    printf("이미 입실해있는 호실입니다. \n");
                else
                    roomManager[room/100 -1][room%100 -1] = 1;
                break;
            case 2: 
                printf("퇴을 처리합니다.\n");
                printf("퇴실할 호실의 번호를 입력해주세요 : ");

                scanf("%d", &room);
                if (roomManager[room/100][room%100] = 0)
                    printf("이미 빈방입니다. \n");
                else
                    roomManager[room/100 -1][room%100 -1] = 0;
                break;
                break;
            case 3:
                printf("현황을 조회합니다.\n");
                for (int i=0; i<FLOOR; i++){
                    for (int j=0; j<ROOMS; j++){
                        printf("%d ", roomManager[i][j]);
                    } printf("\n");
                }
                break;
            case 4: 
                printf("프로그램을 종료합니다.\n");
                break;
            
        }
    }
    
}
