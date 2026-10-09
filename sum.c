#include<stdio.h>
int main(){
	
	int no,a,b,c,d;
	printf("enter any number=  ");
	scanf("%d",&no);
	
	a=no%10;
	b=no/10;
	c=b%10;
	d=b/10;
	
	printf("sum of digits %d",a*a*a+c*c*c+d*d*d);
}