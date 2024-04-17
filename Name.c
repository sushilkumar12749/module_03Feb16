#include<stdio.h>
main()
{
	char Name[30],DateBirth[20],Address[50];
	int Age;
	
	printf("Enter your name :");
	scanf("%s",&Name);
	
	printf("Enetr your DateBirth :");
	scanf("%s",&DateBirth);
	
	printf("Enter Your Address :");
	scanf("%s",&Address);
	
	printf("Enter Your Age :");
	scanf("%d",&Age);
	
	
	printf("\nYour name is : %s", Name);
	printf("\nYour DateBirth is :%s", DateBirth);
	printf("\nYour Address is : %s", Address);
	printf("\nYour Age is : %d", Age);
	
	
}
