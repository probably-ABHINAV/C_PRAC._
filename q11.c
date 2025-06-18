// Check Armstrong num betwwen m and n
#include <stdio.h>
int main(){
    int m,n,lastdig,sum=0;
    printf("Enter M and N: ");
    scanf("%d%d",&m,&n);

    for (int i =m;i<=n;i++){
        int temp =i;
        sum =0;
        while(temp>0){
            lastdig=temp%10;
        sum = sum + (lastdig*lastdig*lastdig);
        temp = temp/10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }

    }


    return 0;
}