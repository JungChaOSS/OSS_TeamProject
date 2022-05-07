#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

typedef struct {
  char proName[100];
  int price;
  int quant;
  int deliver; // 0 or 1
} Product;


void saveData(Product *p, int count); //파일에 데이터를 저장한다
int loadData(Product *p); //파일에서 데이터를 불러온다
void searchName(Product *p, int count); //제품을 검색한다
void listProduct(Product *p, int count); //등록된 전체 제품 리스트를 출력한다
int selectDataNo(Product *p, int count); //원하는 번호를 선택한다
int createProduct(Product *p); //제품을 등록한다 C
void readProduct(Product p); //제품을 읽어온다 R
int updateProduct(Product *p); //제품을 수정한다 U
int deleteProduct(Product *p); //제품을 삭제한다 D
void searchAscendingPrice(Product *p, int count); // 제품 값을 오름차순으로 정렬해 검색한다
void checkDeliever(Product *p, int count); // 배달 유무로 분류해 출력한다
int selectMenu(); //메뉴를 선택한다
