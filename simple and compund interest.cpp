#include <stdio.h>
#include <math.h>
int main() {
	double p,r,t,po,a;
	printf("enter principle:");
	scanf("%lf",&p);
	printf("enter rate:");
	scanf("%lf",&r);
	printf("enter time:");
	scanf("%lf",&t);
	a=1+r/100;
	po=pow(a,t);
  //  printf("%lf", po);
	printf("Simple interest is: %lf\n", p*r*t/100);
	printf("Compund interest is: %lf\n",(p*po));
	
}
