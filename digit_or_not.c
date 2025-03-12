//Digit or not
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a); 
    if(a  > 0 && a < 9){
        printf("%d is digit",a);
    }
    else{
        printf("%d is not a digit", a);
    }
     
    return 0;
}
