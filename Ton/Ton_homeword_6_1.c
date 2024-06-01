#include<stdio.h>

int main(){
    int array[10];
    int min = __INT16_MAX__,max = 0,index_min[10],index_max[10],index_min_count=0,index_max_count=0;
    printf("Enter 10 interger numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
        if(array[i] < min){
            min = array[i];
        }
        else if(array[i] > max){
            max = array[i];
        }
    }
    printf("Min : %d ", min);
    for (int i = 0; i < 10; i++)
    {
        if(array[i] == min){
            index_min[index_min_count++] = i;
        }else if(array[i] == max){
            index_max[index_max_count++] = i;
        }
    }
    printf("index: ");
    for (int i = 0; i < index_min_count; i++)
    {
        printf("%d ", index_min[i]);
    }
    printf("\nMax : %d ", max);
    printf("index: ");
    for (int i = 0; i < index_max_count; i++)
    {
        printf("%d ", index_max[i]);
    }
    return 0;
}