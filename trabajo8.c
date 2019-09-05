#include <stdio.h>

int main(){
  int categoria;
  float salario;
  printf("Para calcular el ajuste del salario del empleado ingresar:");
  printf("\nEl salario actual del empleado: ");
  scanf("%f", &salario);
  do{
  printf("La categoria del emplado: ");
  scanf("%d", &categoria);
} while ((categoria > 4) || (categoria<1));
  switch (categoria){
    case 1:
      salario = salario*1.025;
      break;
    case 2:
      salario = salario*1.038;
      break;
    case 3:
      salario = salario*1.05;
      break;
    case 4:
      salario = salario*1.055;
      break;
  }
  printf("\nEl nuevo salario del empleado aplicando el ajuste con categoria %d es de %.3f\n\n", categoria, salario);
  fflush(stdin);
  getchar();
  return 0;
}
