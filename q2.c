// Check whether a number is prime or not
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    int flag = 0;
    for (int i = 2;i<num;i++){
        if(num%i==0){
            flag = 1;
            break;
        }

    }
    if(flag == 0){
        printf("prime");
    }
    else{
        printf("composite");
    }
    return 0;
}