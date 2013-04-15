#include "yahtzee.h"

struct player{	//player structure
	int score;
	int order;
	int position;
	char name[25];
};

struct player players[4];

int main(void){
	int i, j, roll[6];
	char *choice;	
	srand(time(NULL));	//used for random numbers
	
	/* Get all the names */
	printf("Input your name:\n");
	inputName(human.name);
	
	for(i = 0; i < 3; i++){	//this gets the user to input the names of the opponents
		printf("Input opponent #%d:\n", i+1);
		inputName(cpu[i].name);
	}
	
	printf("\nYour name:\t%s\n", players[0].name);	//0 will always be human
	for(i = 1; i <= 3; i++){	//this will print all the names of the opponents
		printf("Opponents:\t%s\n", players[i].name);
	}
	/* End all the name business */
	
	//get actions go here
	//"roll" will roll the dice
	//"score" will show the scores, and how many rolls are left
	while(1){
		printf(">");
		scanf("%s", choice);
		if(!strcmp("exit", choice)){
			break;
		}else if(!strcmp("score", choice)){	//arrange the leaderboard

			//need to organize the scoreboard

		}else{
			gameMenu(choice);
		}
	}
	
	return 0;
}
