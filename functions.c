#include "yahtzee.h"
//main functions file

/* Rolls the dice */
int rollDice(void){
	int die = rand() % 6;
	
	if(die == 0){
		die++;
	}
	
	return die;
}

/* Adds the user's name */
void inputName(char *name){
	printf("Name>");
	scanf("%s", name);
}

/* Rolls the dice and adds the score up */
void playerRoll(int *score){
	int i, total = 0;
	int roll[6];

	printf("\n");
	for(i = 0; i < 6; i++){
		roll[i] = rollDice();
		printf("Roll #%d:\t%d\n", i+1, roll[i]);
		die(roll[i]);
		*score += roll[i];
		total += roll[i];
	}
	printf("Score:\t\t%d\n", total);
	
}
