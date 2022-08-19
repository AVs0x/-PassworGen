#include <time.h>
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    
    int len;
    int num;
    int tmp;
    printf("Enter the length of the password: ");
    scanf("%d", &len);
    printf("\nEnter the number of passwords you want: ");
    scanf("%d", &num);
    
    srand((unsigned int) time(0) + getpid());
 
    while(num--)
    {
        tmp = len;
        printf("\n");
        while(tmp--) {
            putchar(rand() % 56 + 65);
            srand(rand());
        }
 
        tmp = len;
    }
 
    printf("\n");
 
    return EXIT_SUCCESS;
}