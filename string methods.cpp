#include<stdio.h>
#include<string.h>

char a[50];
 

main(){
	
	
	char b[10]=" hello";
	printf("Enter your text : ");
	scanf("%s",&a); 

	printf("\nstring length is : %d \n",strlen(a));
	printf("string lowerCase is : %s \n",strlwr(a));
	printf("string uperCase is : %s \n",strupr(a));
	printf("string concodinate is : %s \n",strcat(b,a));
	printf("string compare is : %d \n",strcmp(a,b));
	printf("string reverse is : %s \n",strrev(a));

 
 
	
	
	
}
