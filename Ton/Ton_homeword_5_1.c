#include <stdio.h>


int main(){
    int total = 0;
    int m ,n;
    printf("m = ");scanf("%d", &m);
    printf("n = ");scanf("%d", &n);
    for (int i = m; i <= n; i++)
    {
        if(i % 2 == 0){
            printf("%d ", i);
            total += i;
            if(i != n && i + 1 != n){
                printf("+ ");
            }
        }
    }
    printf("= %d", total);
}