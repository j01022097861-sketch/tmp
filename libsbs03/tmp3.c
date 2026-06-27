#include <stdlib.h>
#include <stdio.h>

int main(){
    int size = 5;
    int** arr =(int **)malloc(sizeof(int *) *size); //한 인덱스에 여러개씩 들어가있는 구조로 주소값에 주소값을 배정하는것이기에 **

    int(int i = 0; i<size; i++){
        arr[i] = (int *)malloc(sizeof(int) * size);
    }
    
   for(int i = 0; i<size; i++){
    for(int j  = 0; j<size; j++)
    {
        arr[i][j]=i+j;
    }
   }
   for(int i = 0; i<size; i++){
    for(int j = 0; j<size; j++){
        printf("arr[%d][%d]:%d",i,j,arr[i][j]);

    }
    printf("\n");
   }
   for(int i = 0;i<size; i++){
    free(arr[i])
   }
   free(arr); //배정된 공간을 다시 컴퓨터로 반납. 안해서 오류가 생기진 않지만 장기적으로 컴퓨터에 안좋음(해당 메모리만큼을  계속 못 쓰는거니까)
   return 0;
}