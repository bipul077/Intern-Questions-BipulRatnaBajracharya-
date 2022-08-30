#include <stdio.h>

void main(){
	int yr;
	printf ("Enter a year:");
  	scanf ("%d", &yr);

  if (yr%4 == 0) {

      if(yr%100 == 0) {
      
          if(yr%400 == 0)
             printf("n It is LEAP YEAR.");
          else
             printf("n It is NOT LEAP YEAR.");
      }

      else {
             printf ("n It is LEAP YEAR.");
      }
  }
  else
      printf("n It is NOT LEAP YEAR.");
}
 
  

