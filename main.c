#include <stdio.h>
#include <stdlib.h>


int main() {
  float s_km,e_ms, cst;

  cst=3.6;
  scanf("%f",&e_ms);

  s_km=e_ms*cst;

  printf("km/h:%f\n",s_km);
  return 0;
}