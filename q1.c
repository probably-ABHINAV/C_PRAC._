// wap to print buzz number
#include <stdio.h>
int main(){
    int num;
    printf("Enter number to be checked");
    scanf("%d",&num);
    if (num %7 == 0 || num%10 == 7){
        printf("buzz number");

    }
    else{
        printf("Not a buzz number");
    }
    return 0;
}