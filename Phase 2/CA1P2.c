/*Amir Mohammad Khosravi
Student Number : 810198386
Dr.Hashemi*/
#include<stdio.h>
#include<stdlib.h>
void print_board(char* a);/*this function print the board */
int check_winner(char* b,char* c);/*this function check if we have winner each turn or the game is over without winner.*/
void get_set(char* d,char* e);/*this function get input and set x or o in proper cell*/
void initial_game(char* f);/*this function prepare the game for a new play*/
int ask_play_again(void);/*this function ask at the end of the game if player wants to play again or exit*/

int main()
{
	int game_continue=1;/*with this we continue or break the game loop without using function check winner two times*/
	char X_or_O = 'X';
	char cell[10];
	initial_game(cell);
	while (game_continue==1)
	{
		get_set(cell,&X_or_O);	
		print_board(cell);
		game_continue=check_winner(cell,&X_or_O);
		if (game_continue==0)/*this condition check if game has winner till now*/
		{
			if(ask_play_again()==1)/*equal to : if player wants to play again*/
			{
				game_continue=1;
				initial_game(cell);/*start the game again and flush cells*/
				X_or_O = 'X';/*we use this line because X play first*/
			}
		}
	}	
	system("@cls||clear");/*can be omited . this mmakes the game display better .*/
	printf("THANKS FOR PLAYING THIS GAME.\n\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$$                           $$\n");
	printf("$$   Amirmohammad Khosravi   $$\n$$                           $$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
} 

void print_board(char cell[])/*we get cell array to this function as a pointer*/
{
	system("@cls||clear");/*can be omited*/
	printf("\n     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",cell[7],cell[8],cell[9]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",cell[4],cell[5],cell[6]);
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n",cell[1],cell[2],cell[3]);
	printf("     |     |     \n\n");
}

int check_winner(char cell[],char* X_or_O)/*we get cell array and X_or_O to this function as a pointer*/
{
	int j=1;
	if(
	(cell[1]==*X_or_O&&cell[2]==*X_or_O&&cell[3]==*X_or_O)/*here we check all posibility for a player win*/
	||(cell[1]==*X_or_O&&cell[4]==*X_or_O&&cell[7]==*X_or_O)
	||(cell[1]==*X_or_O&&cell[5]==*X_or_O&&cell[9]==*X_or_O)
	||(cell[4]==*X_or_O&&cell[5]==*X_or_O&&cell[6]==*X_or_O)
	||(cell[7]==*X_or_O&&cell[8]==*X_or_O&&cell[9]==*X_or_O)
	||(cell[2]==*X_or_O&&cell[5]==*X_or_O&&cell[8]==*X_or_O)
	||(cell[3]==*X_or_O&&cell[6]==*X_or_O&&cell[9]==*X_or_O)
	||(cell[7]==*X_or_O&&cell[5]==*X_or_O&&cell[3]==*X_or_O))
	{
		printf("*******************************\n");
		printf("** Player '%c' is the winner. **\n",*X_or_O);
		printf("*******************************\n\n");
		return 0;/*when we return 0 here it means game has a winner */
	}
	else if(cell[1]!=' '&&cell[2]!=' '&&cell[3]!=' '
   		&&cell[4]!=' '&&cell[5]!=' '&&cell[6]!=' '
		&&cell[7]!=' '&&cell[8]!=' '&&cell[9]!=' ')/*here we check if all cells are full and we dont have a winner*/
	{
		printf("*****************************\n");
		printf("** The game has no winner .**\n");
		printf("*****************************\n");	
		return 0;/*when we return 0 here it means game has no winner but its over*/
	}		 
	if(*X_or_O == 'X'){*X_or_O = 'O';}/*here we switch turns between X and O .*/
	else {*X_or_O = 'X';}
	return 1;	
}

void get_set(char cell[] ,char* X_or_O)/*we get cell array and X_or_O to this function as a pointer*/
{
	float pos;
	while (1)/*here we make a loop untill player enter a true input*/
	{
		printf("\nEnter the cell you want to place %c ---->  ",*X_or_O);
		scanf("%f",&pos);
		if(0< pos && pos<10 &&  pos-(int)pos == 0 && cell[(int)pos]==' ')/*here we check if user input is true or not*/
		{
			cell[(int)pos] = *X_or_O; 
			break;
		}
		if(pos<=0||pos>=10||pos-(int)pos!=0){printf("\nChoose a number from 1 to 9 !\n");}
		else {printf("\nThis cell has been choosen ! \n");}
		fflush(stdin);
	}
}

void initial_game(char cell[])/*we get cell array to this function as a pointer*/
{
	system("@cls||clear");/*can be omited*/
	int i;
	printf("     |     |     \n");/*these codes helps player with the position of each cell on the screen*/
	printf("  7  |  8  |  9  \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  4  |  5  |  6  \n");
	printf("_____|_____|_____\n");
	printf("     |     |     \n");
	printf("  1  |  2  |  3  \n");
	printf("     |     |     \n\n");
	printf("This map helps you to find out WHITCH NUMBER shows WHICH POSITION.\n\n");
	printf("X will play first.\n\n");
	for(i=1;i<10;i++)cell[i]=' ';/*here we empty all cells .we delete all x and os.*/
}

int ask_play_again(void)
{
	char again_or_end;
	printf("\n\nIf you want to play again enter 'a' and if you want to exit the game enter 'e' .\n");
	while(1)/*here we make a loop untill player enter a true input*/
	{	
		fflush(stdin);
		scanf("%c",&again_or_end);
		if(again_or_end=='e'){return 0;}
		if(again_or_end=='a'){return 1;}
		printf("\nYou can just choose a or e !\n");
	}
}

