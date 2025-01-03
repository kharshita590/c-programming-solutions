#include <stdio.h>

int main(){
    int rows,cols;
    printf("Enter number of rows : ");
    scanf("%d",&rows);
    
    printf("Enter number of cols : ");
    scanf("%d",&cols);
    
    int arr[rows][cols];
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("Elements [%d][%d]",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(int i=0;i<rows;i++){
        int smallest = arr[i][0];
        int largest = arr[i][0];
        
        for(int j=1;j<cols;j++){
            if(arr[i][j]<smallest){
                smallest = arr[i][j];
            }if(arr[i][j]>largest){
                largest = arr[i][j];
            }
        }
        printf("Row %d: Smallest = %d, Largest = %d\n", i + 1, smallest, largest);
    }
}
