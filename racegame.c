#include <pthread.h>
#include "racegame.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//cars return strings? added together in draw?


#define char PREV = 0;
char* car1() {
//code for input from stackoverflow "Reading enter key in a loop in C"
while (1) {
	char c = getchar();
	if (c == '\n' && PREV == c) {
		//move car one space
	}
	//when someone wins:
	PREV = c;
}
}

char* othercars() {
while (1) {
	char c = getchar();
	if (c == '\n' && PREV == c) {
		unsigned float compsleep = rand(0.1); //0-100 milliseconds
		sleep(compsleep);
	}
	PREV = c;
}
//if sleep > last = move slower
//only return positions
}

void* foo(void *args) {
pthread thread;
int pthread_create(pthreat_t *thread, NULL, void* (*thred_function) (void *), void *arg);
}

//somewhere: void pthread_exit(void *value_ptr);
value_ptr = NULL

void main() {
	printf("Welcome to Cisc220 Racind Arena\n");
	printf("Hit enter to move forward\n");
//int pthread_join(pthread_t thread, void NULL);

}

#define DONE "~";
#define LEFT " ";
#define CAR "|=>";
//int lane somwhere?

char* draw() {

	int position = 0;
	if (position == player) {
		printf("%s", "|=>");
	} else {
		position++;
	}
	for (int i=0; i<player; i++) {
		printf("%s", "~");
	}
	for (int i=0; i>player; i++) {
		printf("%s", " ");
	} prinf("# LANE %d #\n", lane);

system("cis"); //to clear
//return 0 or main()?
sleep(0.2); //sleep is in seconds, 0.2 is 20 milliseconds
}
