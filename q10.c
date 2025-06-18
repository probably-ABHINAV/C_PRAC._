// Check Armstrong num
#include <stdio.h>
int main(){
    int num,lastdig,sum=0;
    printf("Enter Number to check");
    scanf("%d",&num);
    int original = num;
    while(num>0){
        lastdig=num%10;
        sum = sum + (lastdig*lastdig*lastdig);
        num = num/10;

    }
    if(num==original){
        printf("yes");
    }
    else{
        printf("No");
    }

    return 0;
}