#include "libsbs.h"

char *sbs_strdup(const char *s)
{
    char *string;
    int size;

    size = sbs_strlen(s);
    string = (char *)malloc(size * sizeof(char) + 1);

    while(s[i])
    {
        string[i] = s[i];
        i++;
    }
    string[i]='\0';
    return(string); //free 를 넣으면 string을 반환하지 못하기에 free안 넣고, free는 외부에서 사용해야함.
}

//strdup 함수는 s의 크기만큼 메모리를 할당하고 그 메모리에 s를 복제해서 집어넣은 뒤, 메모리 주소를 리턴하는 함수 