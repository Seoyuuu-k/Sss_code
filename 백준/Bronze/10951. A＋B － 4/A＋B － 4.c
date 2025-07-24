#include<stdio.h>

int main(void){
    
    int A,B;
    while(scanf("%d %d",&A,&B) != EOF){
        printf("%d\n",A+B);
        
    } // 스캔값이 -1이면(EOF) : 입력X
 
    return 0;
}