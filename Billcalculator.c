#include <stdio.h>
#include <string.h>
#include "manage.h"

int main(void){
    Product plist[20];
    int indexcount = 0;
    int count = 0, menu;
    count = loadData(plist);
	indexcount = count;
    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        if (menu ==1 || menu ==3 || menu == 4)
            if(count == 0) continue;
        if (menu == 1) {
            if(count>0){listProduct(plist,indexcount);}
            else{printf("데이터가 없습니다\n");}
        }
        else if (menu == 2) {count+=createProduct(&plist[indexcount++]);}
        else if (menu == 3) {
            int no = selectDataNo(plist, indexcount);
            if(no <= 0){
                printf("=> 취소됨 !\n");
                continue;
            }getchar();
            updateProduct(&plist[no-1]);
        }
        else if (menu == 4) {
            int no = selectDataNo(plist, indexcount);
            if(no <= 0){
                printf("=> 취소됨 !\n");
                continue;
            }
            int deletecheck;
            printf("정말로 삭제하시겠습니까?(삭제:1)");
            scanf("%d",&deletecheck);
            if(deletecheck == 1){count-=deleteProduct(&plist[no-1]);}
        }
        else if(menu == 5) {
            saveData(plist,indexcount);
        }
        else if(menu == 6) {
            checkDeliever(plist, indexcount);
        }
        else if(menu == 7) {
            searchAscendingPrice(plist, indexcount);
        }
        else if(menu == 8) {
            searchName(plist,indexcount);
        }
    }
    printf("종료됨!\n");
    return 0;
}
