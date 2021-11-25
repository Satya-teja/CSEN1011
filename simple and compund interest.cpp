#include <stdio.h>
#include <math.h>
int main() {
	int p,r,t;
	printf("enter principle:");
	scanf("%d",&p);
	printf("enter rate:");
	scanf("%d",&r);
	printf("enter time:");
	scanf("%d",&t);
	printf("Simple interest is: %f\n", float(p*r*t/100));
	printf("Compund interest is: %d\n",(p*(1+r/100)*t));
	
}
