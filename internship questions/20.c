#include<stdio.h>
 
void main(){
	int i,j,s,k;
	for(i=1;i<=5;i++){
		k = k + i;
		k=i;
		for(j=1;j<=k;j++){
			printf("*");
		}
		for(s=1;s<=i;s++){
			printf("0");
		}
		printf("\n");
	}	
}
