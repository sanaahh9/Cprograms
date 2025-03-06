#include <stdio.h>
int main(){
    int n, i, a;
    scanf("%d", &n);
    a = 0;
    for(i =2; i <= n-1; i++){
        if(n % i == 0){
            a= 1;
            break;
        }
    }
    if(a == 0){
        printf("%d is Prime", n);
    }
    else{
        printf("%d is not Prime", n);
    }
   return 0;
}
