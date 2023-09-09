/* AMIR MOHAMMAD KHOSRAVI
Student Number  : 810198386
Teacher : Dr.Hashemi
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	int p_turn_changer = 0;//player turn changer.I used it to swith between x and o
	int game_continue = 1;//this check if game has winner till a specific move or not
	int b = 0;//used in line 60 for a loop
	char p_r_definer = 'X';//player round definer.This helps to make the program short
	char x_o_position;//to get the position as an input
	char again_end = 'a';  //I check it at the end of each game ...to know if play again or end 
	char column1_row1 = ' ';//these are for drawing table of game
	char column1_row2 = ' ';
	char column1_row3 = ' ';
	char column2_row1 = ' ';
	char column2_row2 = ' ';
	char column2_row3 = ' ';
	char column3_row1 = ' ';
	char column3_row2 = ' ';
	char column3_row3 = ' ';
	printf("#################################\n");
	printf("## WELCOME TO TIC_TAC_TOE GAME ##\n");
	printf("#################################\n\n");

	while (again_end == 'a') {//this loop will start over the game
		game_continue = 1;
		column1_row1 = ' ';
		column1_row2 = ' ';
		column1_row3 = ' ';
		column2_row1 = ' ';
		column2_row2 = ' ';
		column2_row3 = ' ';
		column3_row1 = ' ';
		column3_row2 = ' ';
		column3_row3 = ' ';
		printf("This map helps you to find out WHITCH CHARACTER shows WHICH POSITION.\n\n");
		printf("     |     |     \n");
		printf("  Q  |  W  |  E  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("  A  |  S  |  D  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("  Z  |  X  |  C  \n");
		printf("     |     |     \n\n");
		printf("X will play first.\n");
		printf("You dont need to press enter while you are playing.\n\n");

		while (game_continue == 1) {//this loop helps to switch round between X and O.while game_continue=1 this codes will be done.if one player win game_continue will be 0. 
			if (p_turn_changer == 0) {//this makes the source shorter.instead of writing code one time with x and one time with o we write the code for a character and then switch it between x and o
				p_r_definer = 'X';
			}
			if (p_turn_changer == 1) {
				p_r_definer = 'O';
			}
			while (b == 0) {//this makes a loop till the player enter a right character
				printf("PLAYER %d :Please enter the position you want to place %c -------> ", p_turn_changer + 1, p_r_definer);
				if (b == 0) {
					x_o_position = getch();//we can use standard form (getchar) but getch makes the game better and we can play faster.
					if (x_o_position == 'z' || x_o_position == 'x' || x_o_position == 'c' || x_o_position == 'a' || x_o_position == 's' ||
						x_o_position == 'd' || x_o_position == 'q' || x_o_position == 'w' || x_o_position == 'e') {
						b++;//this cause break the loop of getting right character
					}
					if (b == 0) {
						printf("Please choose and enter a character from (Q,W,E,A,S,D,Z,X,C).\n");
					}
				}
				if (x_o_position == 'z' && (column1_row1 == 'X' || column1_row1 == 'O')) {//checking if choosed place is empty
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'x' && (column2_row1 == 'X' || column2_row1 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'c' && (column3_row1 == 'X' || column3_row1 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'a' && (column1_row2 == 'X' || column1_row2 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 's' && (column2_row2 == 'X' || column2_row2 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'd' && (column3_row2 == 'X' || column3_row2 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'q' && (column1_row3 == 'X' || column1_row3 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'w' && (column2_row3 == 'X' || column2_row3 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
				if (x_o_position == 'e' && (column3_row3 == 'X' || column3_row3 == 'O')) {
					b = 0;
					printf("This place has been taken .please choose another one.\n");
				}
			}
			system("@cls||clear"); // this makes the game display better .we can omit it.
			b = 0;
			if (x_o_position == 'z') {//these lines save user input in game table
				column1_row1 = p_r_definer;
			}
			if (x_o_position == 'x') {
				column2_row1 = p_r_definer;
			}
			if (x_o_position == 'c') {
				column3_row1 = p_r_definer;
			}
			if (x_o_position == 'a') {
				column1_row2 = p_r_definer;
			}
			if (x_o_position == 's') {
				column2_row2 = p_r_definer;
			}
			if (x_o_position == 'd') {
				column3_row2 = p_r_definer;
			}
			if (x_o_position == 'q') {
				column1_row3 = p_r_definer;
			}
			if (x_o_position == 'w') {
				column2_row3 = p_r_definer;
			}
			if (x_o_position == 'e') {
				column3_row3 = p_r_definer;
			}

			printf("\n     |     |     \n");
			printf("  %c  |  %c  |  %c  \n", column1_row3, column2_row3, column3_row3);
			printf("_____|_____|_____\n");
			printf("     |     |     \n");
			printf("  %c  |  %c  |  %c  \n", column1_row2, column2_row2, column3_row2);
			printf("_____|_____|_____\n");
			printf("     |     |     \n");
			printf("  %c  |  %c  |  %c  \n", column1_row1, column2_row1, column3_row1);
			printf("     |     |     \n\n");

			if ((column1_row1 == 'X'&&column2_row2 == 'X'&&column3_row3 == 'X') || (column1_row1 == 'X'&&column1_row2 == 'X'&&column1_row3 == 'X')
				|| (column2_row1 == 'X'&&column2_row2 == 'X'&&column2_row3 == 'X') || (column3_row1 == 'X'&&column3_row2 == 'X'&&column3_row3 == 'X')
				|| (column1_row1 == 'X'&&column2_row1 == 'X'&&column3_row1 == 'X') || (column1_row2 == 'X'&&column2_row2 == 'X'&&column3_row2 == 'X')
				|| (column1_row3 == 'X'&&column2_row3 == 'X'&&column3_row3 == 'X') || (column1_row3 == 'X'&&column2_row2 == 'X'&&column3_row1 == 'X'))
			{
				printf("******************************************\n");
				printf("** Player 'X' (player %d) is the winner. **\n", p_turn_changer + 1);
				printf("******************************************\n\n");
				game_continue = 0;
			}
			if ((column1_row1 == 'O'&&column2_row2 == 'O'&&column3_row3 == 'O') || (column1_row1 == 'O'&&column1_row2 == 'O'&&column1_row3 == 'O')
				|| (column2_row1 == 'O'&&column2_row2 == 'O'&&column2_row3 == 'O') || (column3_row1 == 'O'&&column3_row2 == 'O'&&column3_row3 == 'O')
				|| (column1_row1 == 'O'&&column2_row1 == 'O'&&column3_row1 == 'O') || (column1_row2 == 'O'&&column2_row2 == 'O'&&column3_row2 == 'O')
				|| (column1_row3 == 'O'&&column2_row3 == 'O'&&column3_row3 == 'O') || (column1_row3 == 'O'&&column2_row2 == 'O'&&column3_row1 == 'O'))
			{
				printf("******************************************\n");
				printf("** Player 'O' (player %d) is the winner. **\n", p_turn_changer + 1);
				printf("******************************************\n");
				game_continue = 0;
			}
			if (column1_row1 != ' '&&column1_row2 != ' '&&column1_row3 != ' '&&column2_row1 != ' '&&column2_row2 != ' '&&column2_row3 != ' '
				&&column3_row1 != ' '&&column3_row2 != ' '&&column3_row3 != ' '&&game_continue == 1) {
				printf("*****************************\n");
				printf("** The game has no winner. **\n");
				printf("*****************************\n");
				game_continue = 0;
			}
			if (p_turn_changer == 0) {
				p_turn_changer = 1;//here we switch players turn
			}
			else {
				p_turn_changer = 0;
			}
		}
		printf("If you want to play again enter 'a' .and if you want to end the game enter 'e' .\n");
		scanf("%s", &again_end);
		if (again_end != 'a'&&again_end != 'e') {
			printf("You can just enter 'e' or 'a'.--->");
		}
		while (again_end != 'a'&&again_end != 'e') {
			scanf("%s", &again_end);

			if (again_end != 'a'&&again_end != 'e') {
				printf("You can just enter 'e' or 'a'.--->");
			}
		}
		if (again_end == 'a') {
			p_turn_changer = 0;
			system("@cls||clear"); // this makes the game display better .we can omit it.
			printf("\n\n@@ NEW GAME @@\n\n");
		}
	}
	system("@cls||clear"); // this makes the game display better .we can omit it.
	printf("THANKS FOR PLAYING THIS GAME.\n\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$                        $$\n");
	printf("$$ AMIR MOHAMMAD KHOSRAVI $$\n");
	printf("$$                        $$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

	return 0;
}
