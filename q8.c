// Check Prime or Composite
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if (num <= 1) {
        printf("Neither prime nor composite\n");
        return 0;
    }
    int flag = 0;
    for(int i = 2 ;i<num-1;i++){
        if(num%i==0){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Prime");
    }
    else{
        printf("composite ");
    }
    return 0;
}