#include <stdio.h>
#include <string.h>
int main(void)
{
	int i = 0;

	int num;
	char sentence[50];
	printf("How much you went to repet the sentence : ");
	scanf("%i", &num);
	while (getchar() != '\n');
   printf("\n WRite the sentence here :  ");
	fgets(sentence, sizeof(sentence), stdin);
	sentence[strcspn(sentence, "\n" )] = '\0'; 
		while (i < num){

		printf("\n %s", sentence);
		i++;
	}
	return 
}
