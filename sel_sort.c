#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int n, arr1[10000];
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
void init_array(int size){
int k;
for(k=0;k<size;k++){
arr1[k] = k*2;
}
}
void sel_sort(int size){
int min_index,i,j;
for(i=0;i<size-1;i++){
    min_index = i;
    for(j=i+1;j<size;j++){
        if(arr1[j] > arr1[min_index])
            min_index = j;
        }
swap(&arr1[min_index],&arr1[i]);
}
}
void print(int size){
int i;
for(i=0;i<size;i++){
    printf("  %d  ",arr1[i]);
}
printf("\n");
}
void main(){
    int size = 5;
    init_array(size);
    print(size);
    sel_sort(size);
    print(size);
}
