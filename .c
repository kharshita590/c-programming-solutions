#include <stdio.h>
int fact(int n){
    int fact=1;
    for(int i=1;i<n;i++){
        fact*=i;
    }
    return fact;
}
int coef(int n, int r){
    return fact(n)/(fact(n-r)*fact(r));
}
int main(){
    int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",coef(i,j));
        }
        printf("\n");
    }
}


