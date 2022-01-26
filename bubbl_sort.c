#include<stdio.h>
int main(){
  int a;
  printf("enter no. of elements:");
  scanf("%d",&a);
  int f[a];
  for(int i=0;i<a;i++){
    scanf("%d",&f[i]);
  }
  for(int i=0;i<a;i++){
    for(int j=0;j<a-1;j++){
      if(f[j]>f[j+1]){
        int t=f[j];
        f[j]=f[j+1];
        f[j+1]=t;
      }
    }
  }
  for(int i=0;i<a;i++)
  printf("%d\t",f[i]);
}