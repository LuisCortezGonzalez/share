#include <stdio.h>

int unid(char unidades[20]);
int cent(char centenas[20]);

int main(){
  char centenas[20], decenas[20], unidades[10], teens[20];
  int centenas_n;
  printf("Ingresa un numero cardinal (e.j. ciento veintiocho): ");
  scanf("%s", centenas);
  centenas_n = unid(centenas);

  printf("\n%d\n", centenas_n);

  fflush(stdin);
  getchar();
  return 0;
}


int unid(char unidades[20]){
  int unidades_n;
  switch (unidades[0]){
    case ('c'):
      switch(unidades[1]){
        case('e'):
          unidades_n = 0;
          break;
        case ('u'):
          unidades_n = 4;
          break;
        case ('i'):
          unidades_n = 5;
          break;
      }
      break;

    case ('u'):
      unidades_n = 1;
      break;

    case ('d'):
      unidades_n = 2;
      break;

    case ('t'):
      unidades_n = 3;
      break;

    case ('s'):
      switch(unidades[1]){
        case ('e'):
          unidades_n = 6;
          break;
        case ('i'):
          unidades_n = 7;
          break;
      }
      break;

    case ('o'):
      unidades_n = 8;
      break;

    case ('n'):
      unidades_n = 9;
      break;
  }
  return unidades_n;
}

int cent(char centenas[20]){
  int centenas_n;
  switch(centenas[0]){
    case 'c':
      switch(centenas[1]){
        case 'i':
          centenas_n = 1;
          break;
        case 'u':
          centenas_n = 4;
          break;
      }
      break;
    case 'd':
      centenas_n = 2;
      break;
    case 't':
      centenas_n = 3;
      break;
    case 'q':
      centenas_n = 5;
      break;
    case 's':
      switch(centenas[2]){
        case 'i':
          centenas_n = 6;
          break;
        case 't':
          centenas_n = 7;
          break;
      }
      break;
    case 'o':
      centenas_n = 8;
      break;
    case 'n':
      centenas_n = 9;
      break;
  }
  return centenas_n;
}
