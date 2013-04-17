#include "yahtzee.h"

struct player{	//player structure
	int score;
	char name[25];
};

struct player players[4];

int main(void){
	int i, j, roll[6];
	char *choice;	
	srand(time(NULL));	//used for random numbers
	
	for(i = 0; i < 4; i++){	//initialize all the scores to zero
		players[i].score = 0;
	}
	
	/* Get all the names */
	printf("Input your name:\n");
	inputName(players[0].name);
	
	for(i = 1; i <= 3; i++){	//this gets the user to input the names of the opponents
		printf("Input opponent #%d:\n", i);
		inputName(players[i].name);
	}
	
	while(getchar() != '\n') continue;	//to replace fflush(stdin);
	
	printf("\nYour name:\t%s\n", players[0].name);	//0 will always be human
	for(i = 1; i <= 3; i++){	//this will print all the names of the opponents
		printf("Opponents:\t%s\n", players[i].name);
	}
	/* End all the name business */
	
	//get actions go here
	//"roll" will roll the dice
	//"score" will show the scores, and how many rolls are left
	while(1){
		printf("\nChoice>");
		gets(choice);
		
		if(!strcmp("exit", choice)){
			break;
		}else if(!strcmp("roll", choice)){
			for(i = 0; i < 4; i++){
				playerRoll(&players[i].score);
				printf("\n%s's score: %d\n", players[i].name, players[i].score);
				printf("\nEnter for next turn...");
				while(getchar() != '\n') continue;
			}
		}
	}
	
	return 0;
}
