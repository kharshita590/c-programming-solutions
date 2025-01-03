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

#include <stdio.h>
void main(){
    char str1[50], str2[50];
    int i;
    printf("Enter any string : ");
    scanf("%s",str1);
    for(i=0;i<50;i++){
        str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("The copied string : %s\n",str2);
}


#include <stdio.h>

int main(){
    char str1[100], str2[100],result[100];
    int i=0,j=0;
    
    printf("Enter first string : ");
    fgets(str1,sizeof(str1),stdin);
    
    printf("Enter second string : ");
    fgets(str2,sizeof(str2),stdin);
    
    while(str1[i]!='\0'){
        result[i]=str1[i];
        i++;
    }
    
    while(str2[j]!='\0'){
        result[i]=str2[j];
        i++;
        j++;
    }
    result[i]='\0';
    printf("The given string : %s\n",result);
}




#include <stdio.h>

int main(){
    char a[10],b[10];
    printf("Enter first string : ");
    scanf("%s",a);
    
    printf("Enter second string : ");
    scanf("%s",b);
    
    int i;
    int flag =0;
    while(a[i]!='\0' &&  b[i]!='\0'){
        if(a[i]!=b[i]){
            flag=1;
            break;
        }
        i++;
    }



#include <stdio.h>
 int main(){
     char ch[100];
     int up,lc=0;
     int i;
     printf("Enter a string : ");
     scanf("%s",ch);
     i=0;
     while(ch[i]!='\0'){
         if(ch[i]>=65  && ch[i]<=92){
             up++;
         }if(ch[i]>=65 && ch[i]<=122){
             lc++;
         }
         i++;
     }
     printf("lower %d",up);
     printf("upper %d",lc);
 }
    if(flag==0){
        printf("Two strings are equal\n");
    }else{
        printf("no not equal\n");
    }
}


#include <stdio.h>
#include <string.h>

int main(){
    char ch[100],temp;
    printf("Enter string : ");
    scanf("%s",ch);
    int i,j;
    i=0;
    j=strlen(ch)-1;
    while(i<j){
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
        i++;
        j--;
    }
    printf("Reversed %s",ch);
}
