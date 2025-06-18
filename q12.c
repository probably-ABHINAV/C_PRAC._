// Roll no. and Marks of 4 student in 2D array
#include <stdio.h>
int main(){
    int r;
    printf("Enter row number");
    scanf("%d",&r);
    int c;
    printf("Enter column number");
    scanf("%d",&c);
    int arr[r][c];
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =0;i<r;i++){
        for(int j =0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
