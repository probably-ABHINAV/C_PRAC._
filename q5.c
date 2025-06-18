// Factorial of n number
#include <stdio.h>
int fact(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    int fct = fact(num);
    printf("%d\n",fct);
    return 0;
}