#include "libsbs.h"

char	*sbs_itoa(int n);{
    long nb = n;
    int sign = 0;
    int len = 1;
    long tmp;
    char *str;

    if(nb<0){
        sign = 1; //부호라는 뜻이니까 1이면 음수. 0이면 양수(첫번째 칸에 - 넣을지 말지)
        nb =  -nb;
    }
    tmp = nb;
    while(tmp>=10){
        tmp /= 10;
        len++;
    }
    len += sign;
    str = malloc(len+1);
    if(str  == NULL)
        return  NULL;
    str[len] = '\0';
    len--;
    while(nb>=10){
        str[len]=nb % 10 +  '0';
        nb /= 10;
        len--;
    }
    str[len]=nb + '0';

    if(sign)
        str[0] = '-';
    
    return str;
}