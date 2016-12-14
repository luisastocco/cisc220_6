#include <pthread.h>
#include "racegame.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

pthread_t user;
pthread_t computer[4];

#define CAR1 0
//make array of 4 cars
#define CAR2 0
#define CAR3 0
#define CAR4 0
#define CAR5 0
#define CAR_NUMBER 5

void* draw() { //get lane & position
	int CAR[i] = 0;
	fot(int i=0; i<40; i++) {
	if (i == CAR[i]) {
		printf("%s", "|=>"); //print car at player's position
	} else {
		CAR[i]++;
	}
	}
	for (int i=0; i<CAR[i]; i++) {
		printf("%s", "~"); //print ~ where the player has already been
	}
	for (int i=0; i>CAR[i]; i<40; i++) {
		printf("%s", " "); //print space where the player needs to go
	} 
	for (int i=0; i>CAR[i]; i<41; i++) {
	if (i==40) {
		printf("# LANE %d #\n", lane); //print lane at the end
	}
	}
}

//int pthread_create(pthread_t *user, NULL, draw();

//cars return strings? added together in draw?

void* cars(void* CAR) {
prev = 0;
//code for input from stackoverflow "Reading enter key in a loop in C"
while (1 && CAR[0]<40) {
	char c = getchar();
	if (c == '\n' && prev == c) { //is it c or 0?
		CAR[0]++;
		computer(); //call other cars
	}::q
	prev = c;
}
}

void* computer(void CAR) {
for (i=1; i<4; i++) {
	while (1 && CAR[i]<40) {
		sleep(rand(0.1)); //0-100 milliseconds
		CAR[i]++;
	}
}
}

void game(void* CAR) {
	int win;
	int lose;
	while (1 && !lose) {
		for (int i=0; i < CARS; i++) {
			if (CAR[i] >= 40) {
				lose = 1;
				win = i+1;
				break;
			}
		system("cis"); //to clear //from stackoverflow
		sleep(0.2); //20 milliseconds
		for (int i=0; i<CARS; i++) {
			draw(CAR[i], i+1);
		}
		if (lose) {
			printf("Car %d is the winner!\n", win);
		}
		return 0;
}
//somewhere: void pthread_exit(void *value_ptr);
value_ptr = NULL

void main() {
	printf("Welcome to Cisc220 Racing Arena\n");
	printf("Hit enter to move forward\n");
        pthread_t threads[NUM_RACERS];
        int rc;
        long t;
        for (t=NUM_RACERS; t>0; t--) {
             rc = pthread_create(threads + t, NULL, cpu, (void *) t);
             if (rc) {
                printf("ERROR; return code from pthread_create() is %d\n", rc)
                exit(-1);
                }
        }
        for (t=0; t<NUM_RACERS; t++) {
            pthread_join(threads[t], NULL);
        }
        pthread_exit(NULL);
}
