#include <stdio.h>

int main(){
  int dia, mes, ano, cdia, cmes, cano, edad_anos, edad_meses;
  printf("Ingresa la fecha de nacimiento en numero (dia mes ano): ");
  scanf("%d", &dia);
  scanf("%d", &mes);
  scanf("%d", &ano);
  printf("Ingresa la fecha actual en numero (dia mes ano): ");
  scanf("%d", &cdia);
  scanf("%d", &cmes);
  scanf("%d", &cano);
  edad_anos = ((cano - ano)*365 +(cmes-mes)*30+ cdia - dia)/365;
  if (edad_anos){
    printf("\nLa edad es de %d anos", edad_anos);
  }
  else{
    edad_meses = (((cano - ano)*365 +(cmes-mes)*30+ cdia - dia)%365)/30;
    printf("\nLa edad es de %d meses", edad_meses);
  }
  printf("\n\n");


  fflush(stdin);
  getchar();
  return 0;
}
