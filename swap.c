#include<stdio.h>
int main(){
	 
	 int a,b,temp;
	 printf("enter a value of a");
	 scanf("%d",&a);
	 printf("enter a value of b");
	 scanf("%d",&b);
	 temp=a;
	 a=b;
	 b=temp;
	 printf("new value of a %d\n\n",a);
	 printf("new value of b %d",b);
}