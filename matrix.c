#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);  
    
    int arr[rows][cols];
    int arr2[rows][cols];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }


    printf("First Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

  
    printf("Second Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

   
    int result[rows][cols];
    
   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
        }
    }

  
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < cols; k++) {
                result[i][j] += arr[i][k] * arr2[k][j];  
            }
        }
    }

    printf("Resultant Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main(){
    int rows,cols;
    scanf("%d %d",&rows,&cols);
     int arr[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("array\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
    
}
