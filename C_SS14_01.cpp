#include <stdio.h>
#include <string.h> 
int main (){
	int length;
	char c[100]; 
	printf("moi ban nhap vao mot chuoi bat ki: ");
	fgets(c,100,stdin);
	printf("chuoi ki tu vua nhap: ");
	fputs(c,stdout); 
	printf("do dai chuoi ki tu vua nhap la: %d",strlen(c)-1);
	 
	
	  
	}
