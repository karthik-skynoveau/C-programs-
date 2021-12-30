#include<stdio.h>
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int totalSubMark;
	int perc;
main(){

	
	printf("Enter your 1st suuject mark : ");
	scanf("%d", &a);
	printf("Enter your 2st suuject mark : ");
	scanf("%d", &b);
	printf("Enter your 3st suuject mark : ");
	scanf("%d", &c);
	printf("Enter your 4st suuject mark : ");
	scanf("%d", &d);
	printf("Enter your 5st suuject mark : ");
	scanf("%d", &e);
	printf("Enter your 6st suuject mark : ");
	scanf("%d", &f);
	totalSubMark = a+b+c+d+e+f;
	
	if(totalSubMark>=0){
		perc=totalSubMark/6 ;
	}
	
	if(perc>=0){
		if(perc<=50){
			printf("fail");
		}
		 if(perc>90){
		 	printf("Your grade is O ");
		 }
		 if(perc>80){
		 	printf("Your grade is A+ ");
		 }
		if(perc>70){
		 	printf("Your grade is A ");
		 }
		 	if(perc>60){
		 	printf("Your grade is B+ ");
		 }
		 	if(perc>50){
		 	printf("Your grade is B ");
		 }
		 
		
		
	}
}
