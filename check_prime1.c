#include <stdio.h>
int prime(int r){
int a = 0;
for(int i =2; i <= r -1; i++){
    if(r % i == 0){
        a = 1;
        break;
    }
}

if(a==0){
    printf("Prime");
}
else{
    printf("Not prime");
}
}
int main(){
int n;
scanf("%d", &n);
prime(n);
    return 0;
}
