#include "libsbs.h"

char	*sbs_strjoin(char const *s1, char const *s2);
{
    size_t = str.strlen(s1);
    size_t = str.strlen(s2);

    char *str = malloc(ㅣ1+ㅣ2 + 1);
    if(s1==NULL||s2==NULL||str==NULL)
        return NULL;

    size_t i= 0;

    while(i<11){
        str[i]=s1[i];
        i++;
    }
    while(j<12){
        str[i+j] =  s2[j];
        j++;
    }
    str[i+j]= '\0';
    return str;
}


//s1과 s2를 이어붙인 문자열을 만들고 그 주솟값을 리턴해주는 함수
//s1길이 + s2의 길이 더한만큼 메모리를 할당하고, 거기에 하나씩 글자를 옮겨서 문자열 완성하기
//혹시 malloc실패시  null, 다 잘되면 주솟값 리턴하기