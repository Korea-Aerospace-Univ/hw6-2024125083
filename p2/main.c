
#include <stdio.h>

int main(void)
{
    
    int arr[20] =  {};
    int N;
    int *p = nullptr;
    int *q = nullptr;
    
    scanf("%d",&N);
    for(p=arr;p<arr+N;p++){
        scanf("%d",p);
    }
    
    for(q=arr;q<arr+N;q++){
        scanf("%d",q);
    }
    
    
    for(q=arr+N-1;q>=0;q--){
        printf(" %d",*p++ + *q);
    }
    

    return 0;
}
