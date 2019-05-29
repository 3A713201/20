#include<stdio.h>
#include<stdlib.h>

struct Phone{
	
	char *phone_brand;
	char *phone_model;
	char *phone_yearofmanufacture;
	int   phone_price;
	char *use_name;
	char *use_cellphone;
	
}phone[2]; 
int main(void){
	int o=0;
	struct Phone phone[5]={"oppo","r15","2010/5/01",15000,"jason","0905385612",
	                     "asus","zef6","2019/5/5",25000,"ted","0905362125",
						 "htc","u10","2017/5/7",24000,"tom","0964153210",
						 "huawei","p30","2019/5/8",16875,"kitty","0988776655",
						 "samsung","s9","2019/5/15",30678,"duck","0965848953"};
	for(o=0;o<5;o++){
		printf("%s的資料----------\n",phone[o].use_name);
		printf("手機的品牌:");
		puts(phone[o].phone_brand);
		printf("手機的型號:");
		puts(phone[o].phone_model);
		printf("手機的出廠日期:");
		puts(phone[o].phone_yearofmanufacture);
		printf("手機的價格:");
		printf("%d\n",phone[o].phone_price);
		printf("使用者:");
		puts(phone[o].use_name);
		printf("手機號碼:");
		puts(phone[o].use_cellphone);
		printf("----------------\n\n");
	}                    
	
	system("pause");
	return 0;
	
}
