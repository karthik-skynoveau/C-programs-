#include<stdio.h>

int no;

int main(){
	printf("Enter your number : ");
	scanf("%d", &no);
	if(no%2==0){
		printf("%d is a Even number", no);
	}
	else
	printf("%d is not  a Even number", no);
	 
}
