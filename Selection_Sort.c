#include<stdio.h>
#define MAX 7

int array[MAX] = {4,6,3,2,1,9,7};
void display(){
    int i;
    for(i = 0; i < MAX; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
void selectionSort(){
    int i, j, min, temp;
    for(i = 0; i < MAX - 1; i++){
        min = i;
        for(j = i + 1; j < MAX; j++){
            if (array[j] < array[min])
            {
              min = j;
            }
        }
        if(min !=i){
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
int main(){
     printf("print the array:");
     display();
     printf("\n");

    selectionSort();
    printf("output array:");
    display();
    
    return 0;
}