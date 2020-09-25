#include <stdio.h>
#include <stdlib.h>


int main() {
  float e_v,e_i,s_r;
    printf("inserir valor de tensão:");
    scanf("%f",&e_v);
    printf("inserir valor de corrente:");
    scanf("%f",&e_i);

    s_r=e_v/e_i;

      printf("resistência:%f\n",s_r);

      return 0;
  
}