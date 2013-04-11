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

/* Searches for 3 or 4 of a kind */
int xOfaKind(int dice[]){
	int i, j, x = 0;
	int buffer;
	
	//need to check for three of a kind
	
	if(x == 3){			//three of a kind
		return 10;
	}else if(x == 4){	//four of a kind
		return 15;
	}else if(x == 5){	//five of a kind
		return 20;
	}else if(x == 6){	//yahtzee!
		return 50;
	}else{
		return 0;
	}
}

/* Adds the user's name */
void inputName(char *name){
	printf("Input name>");
	scanf("%s", name);
}
