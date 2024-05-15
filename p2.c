#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    int frames;
    int i=1,j,x1,x2;    
    printf("Total number of frames :\n");
    scanf("%d",&frames);    
    while(frames>0){
        j=i;
        printf("sending frame :%d\n",i);
        x1=rand()% 10;
        if (x1 % 2 == 0){
           for(x2=1;x2<=2;x2++){
           sleep(x2);
           printf("waiting for %d seconds \n",x2);

           }
           printf("re-sending frame: %d\n",i);
        }
           printf("sending acknowledgement %d for frame %d\n",j,i);
           frames --;
           i++;
    }
           printf("frame sending is completed ");
            
        }

