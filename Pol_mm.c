#include <stdio.h>
#include <stdlib.h>

int main()
{
  float e_pol,s_mm, cst;

  cst=25.4;
  scanf("%f",&e_pol);
  
  s_mm= e_pol*cst;

  printf("mm:%f\n",s_mm);

  return 0;
}
