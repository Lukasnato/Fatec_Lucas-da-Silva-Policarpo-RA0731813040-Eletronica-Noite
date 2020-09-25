#include <stdio.h>
#include <stdlib.h>

int main ()
{
  float s_req, e_r1, e_r2;

  scanf("%f",&e_r1);
  scanf("%f",&e_r2);

  s_req = ((e_r1*e_r2)/(e_r1+e_r2));

  printf("resistencia equivalente:%f\n",s_req);

  return 0;
}
