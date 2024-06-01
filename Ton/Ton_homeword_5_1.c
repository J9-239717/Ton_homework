#include <stdio.h>

#define max 10
int main(){
    int total = 0;

    for (int i = 1; i <= max; i++)
    {
        if(i % 2 == 0){
            printf("%d ", i);
            total += i;
            if(i != max){
                printf("+ ");
            }
        }
    }
    printf("= %d", total);
}