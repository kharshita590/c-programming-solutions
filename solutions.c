#include <stdio.h>

void main(){
    char str[30];
    int i;
    printf("Enter any string: ");
    scanf("%s",str);
    printf("The given string is : %s\n",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=65 && str[i]<=92){
            str[i]=(char)((int)str[i]+32);
        }
    }
    printf("The string in lower case : %s",str);
    
}



#include <stdio.h>

void main(){
    char str[30];
    int i;
    printf("Enter any string : ");
    scanf("%s",str);
    printf("The given string is : %s\n",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>=92 && str[i]<=122){
            str[i]=(char)((int)str[i]-32);
        }
    }
    printf("The given string in upper case : %s\n",str);
}


#include <stdio.h>
#include <ctype.h>

int main(){
    char str[30];
    int v,c,i,s;
    printf("Enter any string : ");
    fgets(str,sizeof(str),stdin);
    
    for(i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            v++;
        }else if(ch>='a' && ch<='z'){
            c++;
        }else{
            s++;
        }
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
    printf("Spaces: %d\n", s);
}

