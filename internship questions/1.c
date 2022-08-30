#include<stdio.h>  
void main()    
{    
 int i,fact=1,number;    
 printf("Enter a number:");    
 scanf("%d",&number);    
	for(i=1;i<=number;i++){    
	  fact=fact*i;    
	}    
  printf("the factorial of a given %d is: %d",number,fact);      
}   
