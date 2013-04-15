#include "yahtzee.h"

struct dice
{
	char one[45]=".~~~~~~.\n\
		      |      |\n\
		      |  ()  |\n\
		      |      |\n\
		      '~~~~~~'\n\n";
	char two[45]=".~~~~~~.\n\
		      |()    |\n\
		      |      |\n\
		      |    ()|\n\
		      '~~~~~~'\n\n";
	char three[45]=".~~~~~~.\n\
			|()    |\n\
			|  ()  |\n\
			|    ()|\n\
			'~~~~~~'\n\n";
	char four[45]=".~~~~~~.\n\
		       |()  ()|\n\
		       |      |\n\
		       |()  ()|\n\
		       '~~~~~~'\n\n";
	char five[45]=".~~~~~~.\n\
		       |()  ()|\n\
		       |  ()  |\n\
		       |()  ()|\n\
		       '~~~~~~'\n\n";
	char six[45]=".~~~~~~.\n\
		      |()  ()|\n\
		      |()  ()|\n\
		      |()  ()|\n\
		      '~~~~~~'\n\n";
}

struct dice pips;

void die (int number)
{
	switch (number)
	{
		case 1:
		{
			printf("%s", pips.one);
			break;
		}
		case 2:
		{
			printf("%s", pips.two);
			break;
		}
		case 3:
		{
			printf("%s", pips.three);
			break;
		}
		case 4:
		{
			printf("%s", pips.four);
			break;
		}
		case 5:
		{
			printf("%s", pips.five);
			break;
		}
		case 6:
		{
			printf("%s", pips.six);
			break;
		}
	}
}
