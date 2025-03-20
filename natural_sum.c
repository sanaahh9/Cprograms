#include <stdio.h>
int sum(int a);
int main(){
    int n;
    scanf("%d", &n);
    int result = sum(n);
    printf("%d", result);
    return 0;
}
int sum(int a){
    if(a == 0){
        return 0;
    }
    return sum(a-1) + a;
}
