#include "my2.h"
#include <stdio.h>

int select_menu() {

  int x, y, i;

  printf("\n아래의 메뉴 중 원하는 메뉴 번호를 하나 선택하세요. \n");
  printf("1.덧셈\n");
  printf("2.뺄셈\n");
  printf("3.곱셈\n");
  printf("4.나눗셈\n");
  scanf("%d", &i);
  printf("선택한 번호는 %d 입니다", i);

  return i;

}

float arithm_op(int x, int y, int i) {

  float result = 0.0;

  switch (i) {
  case 1:
    result = sum(x, y);
    break;
  case 2:
    result = min(x, y);
    break;
  case 3:
    result = mul(x, y);
    break;
  case 4:
    result = dev(x, y);
    break;
  defalut:
    printf("\n잘못된 입력입니다\n");
    break;
  }

  return result;
}

void print_result(float r) { 
  
  printf("\n 결과값은: %f 입니다 \n", r); 

}

int main() {

  int x, y, i;
  float r;

  do {

    i = select_menu();
    if (i == 0) {
      break;
    }

    printf("두 수를 입력하세요: ");
    scanf("%d %d", &x, &y);

    r = arithm_op(x, y, i);
    print_result(r);

  } while (1);

  return 0;
}