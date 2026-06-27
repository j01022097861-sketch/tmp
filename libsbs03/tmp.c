#include <stdlib.h>

int main(){
    int *p = malloc(sizeof(int)*10); //int가 10개 들어갈 주소값 할당
    if(p = NULL)
        return NULL;

    free(p)//메모리에서 쓴 공간만큼을 다시 반납하는거
    return 0;
}