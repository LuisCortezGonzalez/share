#include <stdio.h>

int main(){
  int n, m, c, r;
  printf("Para calcular si un numero es factor de otro ingrese: ");
  printf("\nEl primer numero: ");
  scanf("%d", &n);
  printf("El segundo numero: ");
  scanf("%d", &m);
  if (n<m){
    c = n;
    n = m;
    m = c;
  }

  if (n%m==0){
    r = n/m;
    printf("\n(%d) es factor de (%d): n/m = %d/%d = %d \n\n", m,n, n,m ,r);
  }
  else{
    printf("\n(%d) no es factor de (%d) y (%d) no es factor de (%d)\n\n", m,n, n, m);
  }
  fflush(stdin);
  getchar();
  return 0;
}
