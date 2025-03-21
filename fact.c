#include <stdio.h>
int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main(){
   int num;
   scanf("%d", &num);
   int c =fact(num);
   printf("%d", c);
   return 0;
}
