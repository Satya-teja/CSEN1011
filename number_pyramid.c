#include<stdio.h>
int main(){
	int rows,a,spaces,b,c=0,d=1,e,f,g=1;
	printf("enter no. of rows:");
	scanf("%d",&rows);
	spaces=rows-1;
	for(a=1;a<=rows;a++){
		c+=1;
		f=c;
		for(b=1;b<=spaces;b++){
			printf("  ");
		}
		spaces-=1;
		for(e=1;e<=c;e++){
			printf("%d ",f);
			f+=1;
		}
		f-=2;
		for(g=1;g<=c-1;g++){
			printf("%d ",f);
			f-=1;
		}
		printf("\n");
	}
}