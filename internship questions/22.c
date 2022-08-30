#include<stdio.h>
#include<string.h>
void main(){
	int i,lena,lenb,num=1,temp;
	char a[30] = "JOHN";
	char b[10] = "SMITH";
	lena = strlen(a);
	lenb = strlen(b);
	for(i=0;i<=lenb;i++){
		temp = a[i+1];
		a[i+1] = b[i];
		a[i+2]=temp;
	}
	printf("%s",a);
}
