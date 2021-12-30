#include<stdio.h>

main(){
	
	
	struct student_form{
		char frist_name[15];
		char last_name[1];
		char reg_no[10];
		char mail_id[50];
		char ph_no[10];
		char mark_10th[10];
		char mark_12th[10];
		char dep[10];
	}s_adm;
	
    printf("First name : ");
	scanf("%s",s_adm.frist_name);
	
	printf("Last name : ");
	scanf("%s",s_adm.last_name);
	
	printf("Register no : ");
	scanf("%s",s_adm.reg_no);
	
	printf("mail_id : ");
	scanf("%s",s_adm.mail_id);
	
	printf("Phone no : ");
	scanf("%s",s_adm.ph_no);
	  
	
	printf("10th mark : ");
	scanf("%s",s_adm.mark_10th);
	
	
	printf("12th mark : ");
	scanf("%s",s_adm.mark_12th);
	
	printf("Department : ");
	scanf("%s",s_adm.dep);
	
	
//	response
	printf("\nSuccessfully admission form has submitted");

}
