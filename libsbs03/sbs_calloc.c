#include "libsbs.h"

void	*sbs_calloc(size_t count, size_t size);
{
    void *ptr;
    size_t total;

    total = count * size;

    if (count != 0&& total/count != size)
        return NULL;
    
    
    ptr = malloc(total);
    if(ptr == NULL)
        return NULL;
    
    
    sbs_memset(ptr,0,total);
    return ptr;
}
//malloc과 비슷하게 동작하지만 값을 다 0으로 초기화해줌
//malloc int 네칸 하면 그냥 주솟값만 돌려줬는데 calloc int 네칸은 네칸에 0을 다 넣어서 주솟값을 리턴해주는
//count * size개수만큼 메모리 할당해줌
//성공시 포인터를 반환, 실패 시 NULL을 반환 