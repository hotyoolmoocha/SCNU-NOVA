#include <stdio.h>

void happyBirthday(){

  int birth;
  printf("당신의 생일은 몇번째 생일을 맞이하고 있죠? : \n");
  scanf("%d", &birth);
  printf("사랑하는 친구의 ");
  printf("%d번째 생일을 축하합니다",birth);
}

int main(void){

  happyBirthday();
  return 0;

}