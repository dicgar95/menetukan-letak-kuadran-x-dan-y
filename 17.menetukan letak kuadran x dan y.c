#include <stdio.h>

void main(){
  int x,y;
  printf("mengetahui kuadran dari inputan koordinat x dan y\n");
  printf("masukan nilai x :");
  scanf("%i",&x );
  printf("masukan nilai y :");
  scanf("%i",&y );

  if(x>0&&y>0)
  printf("kuadran 1");
  if(x>0&&y<0)
  printf("kuadran 2");
  if(x<0&&y>0)
  printf("kuadran 3");
  if(x==0&&y==0)
  printf("titik pusat");
}
