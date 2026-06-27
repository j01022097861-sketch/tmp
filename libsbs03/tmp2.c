#include <stdlib.h>
#include <stdio.h>

int main(){
    int *arr = malloc(sizeof(int)*4); //값을 0으로 초기화해주지 않음 그래서 다 일일히 넣어주어야함  
    
    arr[0] = 100;
    arr[1] = 100;
    arr[2] = 100;
    arr[3] = 100;

    for(int i = 0; i<4; i++){
        printf("arr[%d]:%d\n",i,arr[i])

    }
    free(arr);
    return 0; 
}