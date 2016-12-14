//Braedan Robinson 10188414
//Luisa Aimoli 10169687

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//make array of 5 cars
int cars[5]; //global
#define CARS 5;

//do a draw for car1 maybe?

void* draw() {
	int car[i] = 0;
	for(int i=0; i<40; i++) {
	if (i == car[i]) {
		printf("%s", "|=>"); //print car at player's position
	} else {
		car[i]++;
	}
	}
	for (int i=0; i<car[i]; i++) {
		printf("%s", "~"); //print ~ where the player has already been
	}
	for (int i=0; i>car[i]; i<40; i++) {
		printf("%s", " "); //print space where the player needs to go
	} 
	for (int i=0; i>car[i]; i<41; i++) {
	if (i==40) {
		printf("# LANE %d #\n", i); //print lane at the end
	}
	}
}

//int pthread_create(pthread_t *user, NULL, draw();
//cars return strings? added together in draw?

void* user() {
prev = 0;
//code for input from stackoverflow "Reading enter key in a loop in C"
while (1 && car[0]<40) {
	char c = getchar();
	if (c == '\n' && prev == c) { //is it c or 0?
		car[0]++;
		computer(); //call other cars
	}
	prev = c;
}
}

void* computer() {
for (i=1; i<4; i++) {
	while (1 && car[i]<40) {
		usleep(rand(0.1)); //0-100 milliseconds
		car[i]++;
	}
}
}

void game(void* car) {
	int win;
	int lose;
	while (1 && !lose) {
		for (int i=0; i < CARS; i++) {
			if (car[i] >= 40) {
				lose = 1;
				win = i+1;
				break;
			}
		system("cis"); //to clear //from stackoverflow
		usleep(0.2); //20 milliseconds
		for (int i=0; i<CARS; i++) {
			draw(car[i], i+1);
		}
		if (lose) {
			printf("Car %d is the winner!\n", win);
		}
		return 0;
}
//somewhere: void pthread_exit(void *value_ptr);
//value_ptr = NULL
int start(){
    printf("Welcome to CISC220 Racing Arena\nHit Enter to move forward\n");
return 0;
}
int main() {
	start();
	pthread_t drawing;
	pthread_t user;
	pthread_t computer[4];

	CAR[0] = 0;
	CAR[1] = 0;
	CAR[2] = 0;
	CAR[3] = 0;
	CAR[4] = 0;
	
	phtread_create(user, NULL, computer, &CAR[0]);
	int rc;
    	long t;
   	for (t=0; t<4; t++) {
       rc = pthread_create(computer+t, NULL, computer ,&CAR[t+1]);
       if(rc) {
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
       	}
   	}
	pthread_create(drawing, NULL, game, CAR);
	if(rc) {
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
       	}
	pthread_join(drawing, NULL);
	for(t=0; t<4; t++) {
       	pthread_join(threads[t],NULL);
    	}
	
	pthread_exit(NULL);
	return 0;
//int pthread_join(pthread_t thread, void NULL);
}

