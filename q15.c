// scan and print multiplication  of  2 matrix 
#include <stdio.h>
int main(){
    int r; 
    printf("Enter number of Rows: ");
    scanf("%d",&r);
    int c; 
    printf("Enter number of Column: ");
    scanf("%d",&c);
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int b[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
    }
    
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",b[i][j]);
        }
    }
    printf("\n");
    int multi[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             multi [i][j] = a[i][j] * b[i][j];
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             printf("%d ",multi [i][j]);
        }
    }
   
    
    return 0;
}
