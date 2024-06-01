#include<stdio.h>

int main(){
    printf("%-4s", "");
    for (int i = 1; i < 10; i++)
    {
        printf("%-4d",i);
    }
    printf("\n");
    for (int i = 1; i < 10; i++)
    {
        printf("%-4d", i);   
        for (int j = 1; j <= i; j++)
        {
         printf("%-4d", i * j);
        }
        printf("\n");
    }
    return 0;
}