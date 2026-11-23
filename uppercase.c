#include <stdio.h>

int main(void){
    char *n;
    printf("write the sentence ");
    scanf("%s", n);
    int i=0;
    int c=0;
    int j=0;
    while(i==0){
        if(n[j] == "\0"){
            i=1;
        }
        c+=1;
    }
    for (int i=0 ; i<c ; i++){
        printf("%c\n", n[i]);
    }
}