#include<stdio.h>
 
void main(){
	int i,j,k;
	for(i=1;i<=4;i++){
		k=i;
		for(j=1;j<=3;j++){
			printf("%d\t",k);
			k = k + 4;
		}
		printf("\n");
	}	
}
