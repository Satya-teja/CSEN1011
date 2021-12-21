#include<stdio.h>
int main(){
	int a,b,c=1,d=1,e;
	printf("Enter no. of rows");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		for(e=1;e<=d;e++){
			printf("%d ",c);
			c+=1;
		}
		printf("\n");
		d+=1;
	}
}