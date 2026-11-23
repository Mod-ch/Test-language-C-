#include <stdio.h>
void meow(int num) ;
int main(void)
{
    int n;
    printf("Write number of the repet it you want : ");
    scanf("%i" , &n); 
    printf("\n");
    meow(n);
}
void meow(int num){
    for (int i=0 ; i<num ; i++){
        printf("meow\n");
    }
}