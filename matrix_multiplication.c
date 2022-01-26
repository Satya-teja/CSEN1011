#include<stdio.h>
int main(){
  //consider 2 matrices. A=2x3, B=3x4
  int a[2][3],b[3][4];
  for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("now B:");
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      scanf("%d",&b[i][j]);
    }
  }
  int d[2][4];
  for(int i=0;i<2;i++) {
    
    for(int j=0;j<4;j++){
      int c=0;
      for(int k=0;k<3;k++){
        c=c+a[i][k]*b[k][j];
        //printf("%d\t",c);

      }
      d[i][j]=c;

    }
}
  for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
      printf("%d\t",d[i][j]);
    }
    printf("\n");
  }
}