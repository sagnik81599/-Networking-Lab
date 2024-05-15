#include<stdio.h>
#include<stdlib.h>
int main(){
    char message[30],ch;
    int i,key;
    printf("Enter a message to Encrypt-> ");
    scanf("%s",&message);
    printf("Enter key :");
    scanf("%d",&key);
    for(i=0;message[i]!='\0';i++){
        ch=message[i];
        if(ch>='a' && ch<='z'){
        ch= ch-key;
        if(ch<'a'){
            ch= ch+'z'- 'a'+1;
        }
        message[i]=ch;
    }

    else if(ch>='A' && ch<='Z'){  
        ch=ch-key;
        if(ch<'A'){
            ch= ch+'Z'-'A'+1;
        }
        message[i]=ch;
    
    }
    }
      printf("Decrypt message : %s",message);

    // if(message[i]!=ch){
    //     printf("Wrong message");
    // }
    // else if(message[i]=ch){
    //       printf("Decrypt message : %s",message);
    // }    
      
    }
