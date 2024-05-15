#include<stdio.h>
void main(){
    int w,f,frames[50],i;
    printf("Enter window size:\n");
    scanf("%d",&w);
    printf("Enter number of frames to transmit:\n");
    scanf("%d",&f);
    printf("\n Enter %d frames:",f);
    for(i=1;i<=f;i++)
    scanf("%d",&frames[i]);
    printf("With sliding window protocol the frames will be sent in following manners");

    printf("After sending %d frames at each stage sender wait for ACK sent by recevied \n\n",w);
    
    for(i=1;i<=f;i++){
        if(i%w==0){
            printf("%d \n",frames[i]);
            printf("\n ACK of above frame sent is recevied by sender \n\n");
        }
        else
            printf("%d\n",frames[i]);
    }
        if(f%w!=0)
        printf("  Ack of above frame sent is recevied by sender\n");
}
