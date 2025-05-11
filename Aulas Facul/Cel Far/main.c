#include <stdio.h>
#include <stdlib.h>

int main(){
 float C = 0, F = 0;

 printf("Escreva uma temperatura em Celsius:");
 scanf("%f", &C);

 F = (C*9/5)+32;

 printf("(%.2f * 9/5) + 32 = %.2f", C, F);
return 0;
}
