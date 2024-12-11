
#include<stdio.h> 
int main() 
{ 
	int i,age,a; 
	for(i = 0 ;i<10;i++) 
	{ 
		
       
        printf("Iteration time %d\nEnter Your Age : ",i ); 
		scanf("%d",&age); 
		
		if(age<10) 
		{ continue;//this itration stop and next starts
        }
		
		printf("This code is printed coz if condition is not satisfied. \n"); 
		
	} 
	return 0; 
} 