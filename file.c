#include <stdio.h>
#include <stdlib.h>
void add(int numEmp){
    FILE *file = fopen("employee.txt","a");
    if(file==NULL){
        printf("error opening in file\n");
        return;
    }
    for(int i=1;i<=numEmp;i++){
        char login[20],signoff[20];
        printf("Enter login time : ");
        scanf("%s",login);
        
        printf("Enter signoff time : ");
        scanf("%s",signoff);
        
        fprintf("(%d) file %s\n",i,login);
        fprintf("file %s\n",signoff);
        
    }
    fclose(file);
}
void display(){
    *FILE file = fopen("employe.txt","r");
    if(file==NULL){
        printf("error");
        return;
    }
    printf("\n emPLOYEE\n");
    char line[256];
    while(fgets(line,sizeof(line),stdin)){
        printf("%s",line);
    }
}
int main(){
    int numEmp;
    scanf("%d",&numEmp);
    add(numEmp);
    display();
}
