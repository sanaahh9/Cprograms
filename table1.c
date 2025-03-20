#include <stdio.h>
int table(int a){
    for(int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", a, i, a*i);
    }
}
int main(){
    int n;
    scanf("%d", &n);
    table(n);
    return 0;
}
