#include<stdio.h>
#include<stdlib.h>

int main(){
    int array[3][4];
    int total_col[4] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    system("cls");
    printf("%-4s\t", "");
    for (int i = 0; i < 4; i++){
        printf("col%d\t", i+1);
    }
    printf("Total\n");
    for (int i = 0; i < 3; i++){
        int temp = 0;
        printf("row%d\t", i+1);
        for(int j = 0; j < 4; j++){
            printf("%d\t", array[i][j]);
            temp += array[i][j];
            total_col[j] += array[i][j];
        }
        printf("%d\n", temp);
    }
    printf("Total\t");
    int temp = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("%d\t", total_col[i]);
        temp += total_col[i];
    }
    printf("%d\n", temp);
}