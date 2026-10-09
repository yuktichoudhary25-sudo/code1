#include<stdio.h>
void add(){
	int a,b;
	printf("enter number");
	scanf("%d",&a);
	printf("enter number");
	scanf("%d",&b);
	
	printf("addition %d =\n", a+b);
}
void sub(){
	int a,b;

	printf("enter number");
	scanf("%d",&a);
	printf("enter number");
	scanf("%d",&b);
	
	printf("subtraction %d =\n", a-b);
}
void multi(){
int a,b;
	printf("enter number");
	scanf("%d",&a);
	printf("enter number");
	scanf("%d",&b);
	
	printf("multiplication %d =\n",a*b);
}
void div(){
int a,b;
	printf("enter number");
	scanf("%d",&a);
	printf("enter number");
	scanf("%d",&b);
	
	printf("division %d =\n",a/b);
}
	int main(){
	    add();
		sub();
		multi();
		div();	
	}
