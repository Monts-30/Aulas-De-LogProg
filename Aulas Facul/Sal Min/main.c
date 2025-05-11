#include <stdio.h>
#include <stdlib.h>

int main()
{
  float Smin = 1518, Smax = 0;
  printf("Escreva o valor do salario do funcionario:");
  scanf("%f", &Smax);

  printf("O salario do funcionario e %.2f vezes maior que o salario minimo", Smax/Smin);
  printf("\n(%.2f / %.2f = %.2f",Smax, Smin, Smax/Smin);
    return 0;
}
