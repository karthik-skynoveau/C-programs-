#include<stdio.h>

main(){
	
	
	struct student_form{
		char frist_name[15];
		char last_name[1];
		char reg_no[10];
		char mail_id[50];
		char ph_no[10];
		char feedb[200];
	}sb_1;
	
    printf("First name : ");
	scanf("%s",sb_1.frist_name);
	
	printf("Last name : ");
	scanf("%s",sb_1.last_name);
	
	printf("Register no : ");
	scanf("%s",sb_1.reg_no);
	
	printf("mail_id : ");
	scanf("%s",sb_1.mail_id);
	
	printf("Phone no : ");
	scanf("%s",sb_1.ph_no);
	  
	
	printf("Give feedback : ");
	scanf("%s",sb_1.feedb);
	
	
//	response
	printf("\nSuccessfully student feedback form has submitted");

}
