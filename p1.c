#include<stdio.h>
int main(){
    int ip;
    printf("Enter first octate of IPv4 address:");
    scanf("%d",&ip);

    if(ip>=0 && ip<=127){
        printf("class A");
    }

    else if(ip>=128 && ip<=191){
        printf("class B");
    }

    else if(ip>=192 && ip<=223){
        printf("class C");
    }

    else if(ip>=224 && ip<=239){
        printf("class D");
    }

    else if(ip>=240 && ip<=255){
        printf("class E");
    }

    else{
        printf("Worong ip no. type");
    }


}