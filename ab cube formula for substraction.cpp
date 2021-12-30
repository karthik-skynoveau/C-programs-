#include<stdio.h>

int a;
int b;
int result;

main(){
	printf("Enter a value : ");
	scanf("%d",&a);
	printf("Enter b value : ");
	scanf("%d",&b);
	
	printf("Output of (a-b)^3 : ");
	
	//(a+b)^3= a^3 - b^3 - 3ab(a-b)
	
	int a_cube =a*a*a ;
	int b_cube =b*b*b ;
	int ab_add= a-b;
	int ab_add_mult_with= 3*a*b*(ab_add);
	
	result = a_cube - b_cube - ab_add_mult_with ;
	
	
	printf("%d",result);
	
}

