#include<stdio.h>
int main(){
  int a,b=1,c;
  printf("enter a number");
  scanf("%d",&a);
  while(a!=0){
    for(c=1;c<=b;c++){
      printf("%d",c);
    }
    b+=1;
    a-=1;
    printf("\n");
  }

}
/* learning: nested for*/