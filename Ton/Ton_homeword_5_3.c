#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    if(n < 2){
        printf("%d is not prime number\n", n);
        return 0;
    }

    for (int i = 2; i*i <= n; i++)
    {
        if(n % i == 0){
            printf("%d is not prime number\n",n);
            return 0;
        }
    }
    printf("%d is a prime number",n);
}   