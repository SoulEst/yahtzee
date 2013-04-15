#include "yahtzee.h"

struct player{	//player structure
	int score;
	int order;
	char name[25];
};

struct player human;

int main(void){
	srand(time(NULL));	//used for random numbers
	
	inputName(human.name);
	
	printf("Name is: %s\n\n", human.name);
	
	int i, roll[6];
	//main menu goes here
	//one to set the name
	//one to choose how many players
	//one to player the game
	//one to exit
	for(i = 0; i < 6; i++){
		roll[i] = rollDice();
		printf("Roll #%d: ", i+1);
		die(roll[i]);
	}
	
	human.score += addScore(roll);
	printf("\nScore:\t%d\n", human.score);
	
	return 0;
}
