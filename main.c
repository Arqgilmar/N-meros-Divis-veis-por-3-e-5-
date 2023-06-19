#include <stdio.h>

int main(void) {
  
  int num;
  
  printf("Digite um número:\n");
  scanf("%d", &num);

    if(num % 3 == 0 && num % 5 == 0){
      printf("%d é divisivel por 3 e 5");
    }else{
      printf("%d não é divisivel", num);
    }
  return 0;
}
