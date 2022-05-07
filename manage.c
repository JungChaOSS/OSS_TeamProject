#include <stdio.h>
#include <string.h>
#include "manage.h"

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
int updateProduct(Product *p){
    printf("상품 이름은? ");
    getchar();
    fgets(p->proName, SIZE, stdin);
    printf("가격은? ");
    scanf("%d", &p->price);
    printf("개수는? ");
    scanf("%d", &p->quant);
    printf("배달 유무 선택 (1: 배달 O, 0: 배달 X) : ");
    scanf("%d", &p->deliver);
    return 1;
}


int deleteProduct(Product *p){
    p->price = -1;
    printf("=>삭제됨\n");
    return 1;
}

int selectDataNo(Product *p, int count){
    int no;
    listProduct(p, count);
    printf("원하는 번호는(취소:0)? ");
    scanf("%d",&no);
    return no;
}

void listProduct(Product *p, int count) {
	printf("No Name Price quantity Delivery \n");
    for(int i = 0; i < count; i++) {
        if(p[i].price == -1) continue;
        printf("%2d ", i+1);
        readProduct(p[i]);
    }
}
int createProduct(Product *p) {
	printf("상품 이름은? ");
    //getchar();
    //fgets(p->proName, SIZE, stdin);
    scanf("%[^\n]s", p->proName);
    //getchar();

    printf("가격은? ");
    scanf("%d", &p->price);
    
    printf("개수는? ");
    scanf("%d", &p->quant);

	printf("배달 유무 선택 (1: 배달 O, 0: 배달 X) : ");
    scanf("%d", &p->deliver);
    return 1;   
}
void readProduct(Product p) {
	printf("%s %d %d %d\n", p.proName, p.price, p.quant, p.deliver);
}
