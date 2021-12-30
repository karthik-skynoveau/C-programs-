#include<stdio.h>

	char x;

int main(){

		printf("Enter a letter : ");
     	scanf("%c",&x);
     	
     	if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')){
     		printf("%c is a vowels",x);
     	}
     	else
     	  printf("%c is not a vowels", x);
}
