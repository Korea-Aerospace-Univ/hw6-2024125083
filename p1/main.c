

#include <stdio.h>

int main(void)
{
    
    char ch[10];
    char *p = nullptr;
    char *q = nullptr;
    int count = 0;
    int maxCount = 0;
    char result;
    
    for (p = ch; p< ch+10; p++){
        scanf("%c",p);
    }
    
    for(p = ch; p < ch+10; p++){
        for(q = ch; q < ch+10; q++){
            if(*p == *q){
                count++;
            }
        }
            
        if(count > maxCount){
            maxCount = count;
            result = *p;
        }
        
    }
    
    printf("%c %d",result,maxCount);

    return 0;
}
