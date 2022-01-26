#include<stdio.h>
int gcd(int a, int b){
  static c=2;
  static g=1;
  if(c>a || c>b)
  return g;
  else if(a%c==0 && b%c==0){
    g=c;
    c+=1;
    
    return gcd(a,b);
  }
  else{
    c+=1;
    return gcd(a,b);
  }
}
int lcm(int a,int b){
  static c=2;
  if(c%a==0 && c%b==0){
    return c;
  }
  else{
    c+=1;
    lcm(a,b);
  }
}
int main(){
  int x,y,div,mul;
  scanf("%d",&x);
  scanf("%d",&y);
  div=gcd(x,y);
  mul=lcm(x,y);
  printf("%d %d",div,mul);
}