#include<stdio.h>
#include<stdbool.h>
#define MAX 10
int list[MAX] = {1,8,4,6,0,3,5,2,7,9};

void display(){
    int i;
    for(i=0;i<MAX;i++){
        printf("%d", list[i]);
    }
    printf("\n");
}

void bubbleSort(){
    int i,j,temp;
    bool swapped = false;
    for(i = 0;i<MAX - 1;i++){
        swapped = false;
        for(j = 0;j < MAX-1;j++){
            printf("Items compared: %d and %d", list[j],list[j+1]);

            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;

            swapped = true;
            printf("swapped %d and %d",list[j], list[j+1]);
            }
            else {
                printf("not swapped\n");
            }
        }
        if(!swapped){
            break;
        }
        printf("iteration : %d",(i+1));
        display();
    }
}
int main(){
    printf("input array:");
    display();
    printf("\n");

    bubbleSort();
    printf("output array:");
    display();

    return 0;
}