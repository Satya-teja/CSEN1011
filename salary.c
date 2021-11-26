#include <stdio.h>
int main(){
  float da,pf,it,others,ta,hra,basic,net;
  printf("input for basic\n");
  scanf("%f",&basic);
  printf("input for others\n");
  scanf("%f",&others);
  printf("input for ta\n");
  scanf("%f",&ta);
  printf("input for hra\n");
  scanf("%f",&hra);
  da=(basic*12/100);
  pf=(basic*14/100);
  it=(basic*15/100);
  net=basic+da+hra+others-pf-it;
  printf("net salary is:%f",net);
}