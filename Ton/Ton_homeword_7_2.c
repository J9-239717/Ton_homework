#include<stdio.h>

void input();
int summation(int,int);
char calculate(int);
void display();

int mid_term,final_term;
char grade;
int main(){
    int total_score;
    input();
    total_score = summation(mid_term,final_term);
    grade = calculate(total_score);
    display();
}

void input(){
    scanf("%d %d", &mid_term, &final_term);
}

int summation(int a,int b){
    return ((a+b)/2);
}

char calculate(int a){
    if(a >= 80){
        return 'A';
    }else if(a >= 70){
        return 'B';
    }else if(a >= 60){
        return 'C';
    }else if(a >= 50){
        return 'D';
    }else{
        return 'F';
    }
}

void display(){
    printf("Your grade is %c\n", grade);
}

