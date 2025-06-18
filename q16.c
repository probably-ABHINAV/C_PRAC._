// scan and print substraction  of  2 matrix 
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
    int subs[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             subs [i][j] = a[i][j] - b[i][j];
        }
    }
    printf("\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             printf("%d ",subs [i][j]);
        }
    }
   
    
    return 0;
}
