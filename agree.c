#include <stdio.h>
void agree(char p);
// void even(int n);
int main(void)
{
    char r ;
    printf("Are you agree ? ");
    scanf("%c", &r);
    printf("\n");
    agree(r);
    // int number;
    // printf("Enter the number which you want 'is it even ?' : ");
    // scanf("%i", &number);
    // printf("\n");
    // even(number);
}
// void even(int n)
// {
//     if (n % 2 == 0)
//     {
//         printf("%i is even ", n);
//     }
//     else
//     {
//         printf("%i isn't even it is odd\n", n);
//     }
// }
void agree(char p){
    if (p == 'y' || p == 'Y')
    {
        printf("Agreed\n");
    }
    else if (p == 'n' || p == 'N')
    {
        printf("Not agree \n");
    }
    else
    {
        printf("Are you agree ? ");
        scanf("%c", &p);
        printf("\n");
        agree(p);
    }
}