#include<stdio.h>
 
void main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		if(i!=1&&i!=5){
			printf("*   *");
		}
		else{
			for(j=1;j<=5;j++){
			printf("*");
		}
		}
		printf("\n");
	}	
}
