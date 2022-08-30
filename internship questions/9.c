#include<stdio.h>
 
void main(){
	int i,j;
	for(j<1;j<=7;j++){
		for(i=1;i<=8-j;i++){
			printf("%d ",i);
		}
		printf("\n");
	}
	
}
