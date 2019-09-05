#include <stdio.h>

int main(){
  int dias;
  float precio_dia, sub_tot, desc=0, precio_tot;
  printf("Para calcular el precio a pagar ingrese: ");
  printf("\nEl numero de dias de hospedaje: ");
  scanf("%d", &dias);
  printf("El precio diario de la habitacion: ");
  scanf("%f", &precio_dia);

  sub_tot = dias*precio_dia;
  if (dias>15){
    desc = sub_tot*0.2;
  }
  else if (dias>10){
    desc = sub_tot*0.15;

  }
  else if (dias>5){
    desc = sub_tot*0.1;
  }

  precio_tot = sub_tot - desc;
  printf("\nSubtotal a pagar: %.2f", sub_tot);
  printf("\nDescuento: %.2f", desc);
  printf("\nTotal a pagar: %.2f\n\n", precio_tot);
  fflush(stdin);
  getchar();
  return 0;
}
