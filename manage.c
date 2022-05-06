#include <stdio.h>
#include <string.h>
#include "manager.h"

int selectMenu(){
	int menu;
	printf("\n**********\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("5. 저장\n");
	printf("6. 배송 유무 검색\n");
	printf("7. 가격 정렬(오름차순) 검색\n");
	printf("0. 종료\n\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);
  	getchar();
	return menu;
}
