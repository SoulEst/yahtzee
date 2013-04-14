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

/* Adds the score of the dice */
int addScore(int dice[]){
	int i, total;
	for(i = 0; i < 6; i++){
		total += dice[i];
	}
	
	return total;
}

/* Adds the user's name */
void inputName(char *name){
	printf("Name>");
	scanf("%s", name);
}

/* Game menu */
void gameMenu(char *c){
	if(!strcmp("roll", c)){
		playerRoll();
	}else{
		printf("Not an option.\n\n");
	}
}

void playerRoll(void){
	/* HUMAN ROLLING SCRIPT */
	printf("\n");
	for(i = 0; i < 6; i++){
		roll[i] = rollDice();
		printf("Roll #%d:\t%d\n", i+1, roll[i]);
	}
	
	human.rolls++;
	human.score += addScore(roll);
	printf("\nYour Score:\t%d\n", human.score);
	/* END THE HUMAN ROLLING */
	
	/* CPU ROLLING */
	printf("\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 6; j++){
			roll[j] = rollDice();
			printf("Roll #%d:\t%d\n", j+1, roll[j]);
		}
		cpu[i].rolls++;
		cpu[i].score += addScore(roll);
		printf("\n%s Score:\t%d\n\n", cpu[i].name, cpu[i].score);
	}
	/* END CPU ROLLING */
}
