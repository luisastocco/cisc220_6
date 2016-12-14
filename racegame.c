//Braedan Robinson 10188414
//Luisa Aimoli 10169687

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

//make array of 5 cars
int cars[5]; //global
#define CARS 5; //number of cars/lanes/players

//do a draw for car1 maybe? or should we stick to array of 5 all together?

void screen() {
while (1) {
	for (int i=0; i<5; i++) {
		if (car[i] >= 40) {
			printf("Car %d is the winner!\n", i);
			break;
		}
	}
	system("cis"); //to clear //from stackoverflow
	for (int i=0; i<5; i++) {
		draw(i);
	}
	usleep(0.2); //20 milliseconds
}
	return 0;
}
//somewhere: void pthread_exit(void *value_ptr);
//value_ptr = NULL

void* draw(int number) {
	for(int i=0; i<40; i++) {
	if (i == car[number]) {
		printf("%s", "|=>"); //print car at player's position
	} else {
		car[number]++;
	}
	}
	for (int i=0; i<car[number]; i++) {
		printf("%s", "~"); //print ~ where the player has already been
	}
	for (int i=0; i>car[number]; i<40; i++) {
		printf("%s", " "); //print space where the player needs to go
	} 
	for (int i=0; i>car[number]; i<41; i++) {
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
		ai(); //call other cars
	}
	prev = c;
}
}

void* ai() {
for (i=1; i<4; i++) {
	while (1 && car[i]<40) {
		usleep(rand(0.1)); //0-100 milliseconds
		car[i]++;
	}
}
}
		
int main() {
	printf("Welcome to CISC220 Racing Arena\nHit Enter to move forward\n");
	pthread_t drawing;
	pthread_t user;
	pthread_t computer[4];

	car[0] = 0;
	car[1] = 0;
	car[2] = 0;
	car[3] = 0;
	car[4] = 0;
	
	int rc;
    	long t;
	rc =phtread_create(user, NULL, ai, &car[0]);
	if(rc) {
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
       	}
   	for (t=1; t<5; t++) {
       rc = pthread_create(computer[t], NULL, ai ,&car[t+1]);
       if(rc) {
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
       	}
   	}
	rc = pthread_create(&drawing, NULL, screen, &car);
	if(rc) {
         printf("ERROR; return code from pthread_create() is %d\n", rc);
         exit(-1);
       	}
	pthread_join(drawing, NULL);
	for(t=0; t<4; t++) {
       	pthread_join(computer[t],NULL);
    	}
	
	pthread_exit(NULL);
	return 0;
//int pthread_join(pthread_t thread, void NULL);
}

