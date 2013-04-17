#include "yahtzee.h"

struct dice{
	char *one;
	char *two;
	char *three;
	char *four;
	char *five;
	char *six;
};

struct dice pips;

void die(int number){
	pips.one=	"\t\t.~~~~~~.\n\t\t|      |\n\t\t|  ()  |\n\t\t|      |\n\t\t'~~~~~~'\n";
	pips.two=	"\t\t.~~~~~~.\n\t\t|()    |\n\t\t|      |\n\t\t|    ()|\n\t\t'~~~~~~'\n";
	pips.three=	"\t\t.~~~~~~.\n\t\t|()    |\n\t\t|  ()  |\n\t\t|    ()|\n\t\t'~~~~~~'\n";
	pips.four=	"\t\t.~~~~~~.\n\t\t|()  ()|\n\t\t|      |\n\t\t|()  ()|\n\t\t'~~~~~~'\n";
	pips.five=	"\t\t.~~~~~~.\n\t\t|()  ()|\n\t\t|  ()  |\n\t\t|()  ()|\n\t\t'~~~~~~'\n";
	pips.six=	"\t\t.~~~~~~.\n\t\t|()  ()|\n\t\t|()  ()|\n\t\t|()  ()|\n\t\t'~~~~~~'\n";
	
	switch (number){
		case 1:
			printf("%s", pips.one);
			break;
		case 2:
			printf("%s", pips.two);
			break;
		case 3:
			printf("%s", pips.three);
			break;
		case 4:
			printf("%s", pips.four);
			break;
		case 5:
			printf("%s", pips.five);
			break;
		case 6:
			printf("%s", pips.six);
			break;
	}
}
