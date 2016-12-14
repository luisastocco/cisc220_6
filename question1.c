#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
//Braedan Robinson 10188414
//Luisa Stocco 

#define NUM_RACERS 5

int start(){
    printf("Welcome to CISC220 Racing Arena\nHit Enter to move forward\n");
return 0;
}

void *print_hello(void *threadid){
    int position = 0;
    long tid;
    int i;
    int finish = 40;
    tid = (long) threadid;
    while (i < finish) {
       printf("%d", i);
       if (i < position){
          printf(" ");
       }
       if (i = position) {
          printf("|->");
       }
       else {
          printf("~");
       }
      i++;
    }
    printf("# LANE#%ld #!\n", tid);
    pthread_exit(NULL);
}

int main(int argc, char *argv[]){
    start();
    pthread_t threads[NUM_RACERS];
    int rc;
    long t;
    for (t=NUM_RACERS; t>0; t--) {
       rc = pthread_create(threads + t, NULL, print_hello ,(void *) t);
       if(rc) {
         printf("ERROR;return code from pthread_create() is %d\n", rc);
         exit(-1);
       }
    }
    for(t=0; t<NUM_RACERS; t++) {
       pthread_join(threads[t],NULL);
    }
pthread_exit(NULL);
return 0;
}
