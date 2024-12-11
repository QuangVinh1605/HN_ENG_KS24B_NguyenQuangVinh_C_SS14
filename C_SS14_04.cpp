#include <stdio.h>
#include <string.h>
int main(){
	char str[]="Hello,world!";
	char item;
	int length= strlen(str);
	int count=0; 
	printf("moi ban nhap vao mot ki tu bat ki:");
	scanf("%c",&item); 
	for (int i=0;i<length;i++){
		if(str[i]==item){
			count++; 
		}
	}
	if(count!=0){
		printf("ki tu %c xuat hien %d lan trong mang",item,count); 
		
	}else{
		printf("phan tu %c khong ton tai trong mang",item); 
	}
	return 0; 
	 
} 
