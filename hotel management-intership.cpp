#include<stdio.h>

int input;
int input_1;
int input_2;
int input_3;
int input_4;
char arr;




 int main(){
	
	printf("Our Restarent Dish:");
	printf("\n 1.Noodle");
	printf("\n 2.Rice");
	printf("\n 3.Grill and Tandori");
	printf("\n 4.Briyani");
	
	printf("\n\nSelect your dish : ");
	scanf("%d",&input);
	 
	
	char ndle[]="Noodle";
	char rice[]="Rice";
	char gril[]="Grill and Tandori";
	char bri[]="Briyani";
	
	if(input==1){
		
		printf("\n 1.Half plate \n 2.Full plate");
		printf("\n \n Select your Quantity : ");
		scanf("%d",&input_1);
		
		if(input_1==1){
			printf("\n Your order price is 120");
		}
		else if(input_1==2)
		printf("\n Your order price is 240");
		else
		printf(" \n This quantity is not available");	
	}
	
		if(input==2){
			
		printf("\n 1.Half \n 2.Full ");
		printf("\n \n Select your Quantity : ");
		scanf("%d",&input_2);
		
		if(input_2==1){
			printf("\n Your order price is 60");
		}
		else if(input_2==2)
		printf("\n Your order price is 120");
		else
		printf(" \n This quantity is not available");	
	}
	
		if(input==3){
			
		printf("\n 1.Half \n 2.Full ");
		printf("\n \n Select your Quantity : ");
		scanf("%d",&input_3);
		
		if(input_3==1){
			printf("\n Your order price is 180");
		}
		else if(input_3==2)
		printf("\n Your order price is 360");
		else
		printf(" \n This quantity is not available");	
	}
	
		if(input==4){
			
		printf("\n 1.Half \n 2.Full ");
		printf("\n \n Select your Quantity : ");
		scanf("%d",&input_4);
		
		if(input_4==1){
			printf("\n Your order price is 90");
		}
		else if(input_4==2)
		printf("\n Your order price is 120");
		else
		printf(" \n This quantity is not available");	
	}
	
	
	
}
