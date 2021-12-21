#include<stdio.h>
int main(){
	int rows,spaces=0,a,b,c,d;
	printf("enter no. of rows:");
	scanf("%d",&rows);
	a=rows;
	for(a;a>=1;a--){
		for(b=1;b<=spaces;b++){
			printf(" ");
		}
		spaces+=1;
		c=a*2-1;
		for(d=1;d<=c;d++){
			printf("*");
		}
		printf("\n");
	}
	
	
}