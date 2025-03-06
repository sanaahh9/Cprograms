#include <stdio.h>
int main(){
    int n,i, fact =1;
    scanf("%d", &n);
    if(n < 0){
        printf("Not defined");
    }
    else{
        for(i = 2; i<=n; i++){
            fact *= i;
        }
        printf("%d", fact);
    }
    return 0;
}
