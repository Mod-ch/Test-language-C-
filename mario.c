#include <stdio.h>
int get_positive(void) ;
int main(void)
{
    int height = get_positive();
    for(int i =0 ; i < height ; i++){
        for(int j=0 ; j < height ; j++){
            printf("#");
        }
        printf("\n");
    }
}
int get_positive(void){
    int n;
    do{
        printf("Write the number of repetition : ");
        scanf("%i",&n);
    }while(n < 1);
    return n;
}