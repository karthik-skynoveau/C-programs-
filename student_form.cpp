#include<stdio.h>

main(){
	
	
	struct student_form{
		char frist_name[15]; 
		char last_name[1];
		char reg_no[10];
		char mail_id[50];
		char ph_no[10];
		char dep[10];
		char sec[5];
	}s1;
	
    printf("First name : ");
	scanf("%s",s1.frist_name);
	
	printf("Last name : ");
	scanf("%s",s1.last_name);
	
	printf("Register no : ");
	scanf("%s",s1.reg_no);
	
	printf("mail_id : ");
	scanf("%s",s1.mail_id);
	
	printf("Phone no : ");
	scanf("%s",s1.ph_no);
	
	printf("Department : ");
	scanf("%s",s1.dep);  
	
	printf("Section : ");
	scanf("%s",s1.sec);  
	
	
//	response
	printf("\nSuccessfully form submitted");

}
