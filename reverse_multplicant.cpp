 #include<stdio.h>
 
 int no;
 int mul;
 int c;
 main(){
 	
 	printf("Enter your number : ");
 	scanf("%d",&no);
 	
 	printf("Enter your multiplicant : ");
 	scanf("%d",&mul);
 	
 	printf("the result : \n");
 	
 	for(no; no>=1 ; no-- ){
 		
 		
 		 c = no*mul;
 	 
 		
		printf("\n %d",c); 		
 	}
 	
 }
