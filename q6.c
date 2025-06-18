// sum of A.P = 1!/n!+2!/n!.....x!/n!
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
    float sum=0;
    printf("enter number");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        sum=sum+ ((float)fact(i)/fact(num));
    }
    printf("%f\n",sum);
    return 0;
}