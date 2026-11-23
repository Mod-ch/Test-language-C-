#include <stdio.h>
//#include <stdlib.h>

int main(void){
//	char *s = malloc(5);
//	printf("what is your name : ");
//	scanf("%s ", s);
//	printf("Hello , %s", s);
//	printf(" How are you ? \n");
//	free(s);
  int num1;
  int num2;
  printf("Write the first number : ");
  scanf(" %i", &num1);
  printf("\n");
  printf("Write the second number : ");
  scanf(" %i", &num2);
  printf("\n");
  if(num1 < num2){
  	printf("%i " , num1);
  	printf(" is loss of  ");
  	printf("%i \n" , num2);
  }
  else if(num1 > num2 ){
  	printf("%i " , num2);
  	printf(" is loss of ");
  	printf("%i \n" , num1);
  }
  else{
  	printf("%i " , num1);
  	printf(" is equals \n");
  	printf("%i \n" , num2);
  }
  printf("the sum of the two numbers is : %i" , num1+num2);
}
