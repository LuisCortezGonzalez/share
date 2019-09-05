#include <stdio.h>

int main(){
  char dia[3], mes[20], ano[5];
  int mes_n=0;
  printf("Ingresa un fecha: ");
  scanf("%s", dia);
  scanf("%s", mes);
  scanf("%s", ano);

  switch (mes[0]){
    case ('e'):
      mes_n = 1;
      break;
    case ('f'):
      mes_n = 2;
      break;
    case ('m'):
      switch(mes[2]){
        case('r'):
          mes_n = 3;
          break;
        case('y'):
          mes_n = 5;
          break;
      }
      break;
    case ('a'):
      switch(mes[1]){
        case('b'):
          mes_n = 4;
          break;
        case('g'):
          mes_n = 8;
          break;
      }
      break;
    case ('j'):
      switch(mes[2]){
        case('n'):
          mes_n = 6;
          break;
        case('l'):
          mes_n = 7;
          break;
      }
      break;
    case ('s'):
      mes_n = 9;
      break;
    case ('o'):
      mes_n = 10;
      break;
    case ('n'):
      mes_n = 11;
      break;
    case ('d'):
      mes_n = 12;
      break;

  }
  printf("%s,  %d, %s\n\n", dia, mes_n, ano);
  fflush(stdin);
  getchar();
  return 0;
}
