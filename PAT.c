#include<stdio.h>
int main(){
  int i=0,j=0,k=0,l=0;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      for(k=0;k<10;k++){
        for(l=0;l<10;l++){
          printf("%i%i%i%i ",i,j,k,l);
        }printf("\n");
      }
    }
  }printf("\n");
  return 0;
}
