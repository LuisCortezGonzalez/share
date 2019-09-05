#include <stdio.h>

int main(){
  char nombre[20];
  int tipo, cantidad;
  float precio_uni, sub_tot, precio_tot, desc;
  printf("Para imprimir el recibo de compra ingrese: ");
  printf("\nEl nombre del cliente: ");
  scanf("%s", nombre);
  printf("El tipo de cliente: ");
  scanf("%d", &tipo);
  printf("La cantidad de hojas: ");
  scanf("%d", &cantidad);
  printf("El precio por hoja: ");
  scanf("%f", &precio_uni);

  sub_tot = cantidad*precio_uni;
  switch (tipo){
    case 1:
      desc = sub_tot*0.05;
      break;
    case 2:
      desc = sub_tot*0.08;
      break;
    case 3:
      desc = sub_tot*0.12;
      break;
    case 4:
      desc = sub_tot*0.15;
      break;
  }
  precio_tot = sub_tot - desc;
  printf("\n\n%s\n", nombre);
  printf("Subtotal a pagar: %.2f\n", sub_tot);
  printf("Descuento: %.2f\n", desc);
  printf("Total a pagar: %.2f\n\n", precio_tot);




  fflush(stdin);
  getchar();
  return 0;
}
