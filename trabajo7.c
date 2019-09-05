#include <stdio.h>

int main(){
  int huevos_comprados;
  float precio_unitario, precio_total;
  printf("Ingresa el precio de cada huevo individual: ");
  scanf("%f", &precio_unitario);
  printf("Ingresa la cantidad de huevos que seran comprados: ");
  scanf("%d", &huevos_comprados);

  printf("\n");
  precio_total = precio_unitario*huevos_comprados;
  if ((huevos_comprados>=100) && (huevos_comprados <=200)){
    precio_total = precio_total*0.9;
  }
  else if((huevos_comprados>=201) && (huevos_comprados<=500)){
    precio_total = precio_total*0.85;
  }
  else if((huevos_comprados>500)){
    precio_total = precio_total*0.8;
  }
  printf("El precio de venta de %d huevos es de %.2f\n\n", huevos_comprados, precio_total);
  fflush(stdin);
  getchar();
  return 0;
}
