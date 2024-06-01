#include <stdio.h>

int sum_odd(int,int);
int sum_even(int,int);

int main(){
    printf("=%d\n", sum_odd(1,10));
    printf("=%d\n", sum_odd(9,20));
    printf("=%d\n", sum_even(1,10));
    printf("=%d\n", sum_even(9,20));
}

int sum_odd(int a,int b){
    int total = 0;
    for(int i = a; i < b; i ++){
        if(i % 2 != 0){
            printf("%d", i);
            total += i;
            if(i != b - 1) printf("+");
        }
        
    }
    return total;
}
int sum_even(int a,int b){
    int total = 0;
    for(int i = a; i < b; i ++){
        if(i % 2 == 0){
            printf("%d", i);
            total += i;
            if(i != b - 1) printf("+");
        }
        
    }
    return total;
}