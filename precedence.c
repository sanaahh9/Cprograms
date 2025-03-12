//Precedence of operators
#include <stdio.h>
int main(){
    int a = 5*2-2*3;
    int b = 5*2 / 2*3;
    int c = 5*(2*2)*3;
    int d = 5+2 / 2*3;
    printf("%d", a); // 4
    printf("%d", b); //15
    printf("%d", c); //15
    printf("%d", d); //8
    return 0;
}
