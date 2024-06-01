#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    return (*(int*)a < *(int*)b) ? -1 : 1;
}

int main(){
    int array[10];
    printf("Enter 10 interger numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    qsort(array,10,sizeof(array[0]),compare);
    printf("Numbers in ascending order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}