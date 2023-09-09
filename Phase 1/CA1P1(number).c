/* AMIR MOHAMMAD KHOSRAVI
Student Number  : 810198386
Teacher : Dr.Hashemi
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	/*In lines 137 , 243 , 247 I used a command to clear console screen to make game better. If its not allowed we can easyly omit these lines.*/
	int p_turn_changer=0;/*player turn changer.I used it to swith between x and o*/
	int game_continue=1;/*used to continue loop untill the game has a winner.its kind of flag.*/
	char p_r_definer='X';/*player round definer.at the beginning of loop I switch it between X and O to make condition codes shorter.*/
	float x_o_position=0;
	char again_end='a';  /* check at the end of the game ...to play again or end */
	char column1_row1=' ';
	char column1_row2=' ';
	char column1_row3=' ';
	char column2_row1=' ';
	char column2_row2=' ';
	char column2_row3=' ';
	char column3_row1=' ';
	char column3_row2=' ';
	char column3_row3=' ';
	int b=0;/*Its a flag used in line 70*/
	int j=0;/*used in line 76 for a loop*/
	printf("#################################\n");
	printf("## WELCOME TO TIC_TAC_TOE GAME ##\n");
	printf("#################################\n\n");

	while(again_end=='a')
	{
		game_continue=1;
		column1_row1=' ';
	    column1_row2=' ';
	    column1_row3=' ';
	    column2_row1=' ';
	    column2_row2=' ';
	    column2_row3=' ';
	    column3_row1=' ';
	    column3_row2=' ';
	    column3_row3=' ';

		printf("This map helps you to find out WHITCH NUMBER shows WHICH POSITION.\n\n");
		printf("     |     |     \n");
		printf("  7  |  8  |  9  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("  4  |  5  |  6  \n");
		printf("_____|_____|_____\n");
		printf("     |     |     \n");
		printf("  1  |  2  |  3  \n");
		printf("     |     |     \n\n");
		printf("X will play first.\n\n");

		while(game_continue==1)
		/*this loop helps to switch round between X and O.
		while game_continue=1 this codes will be done.if one player win game_continue will be 0. */
		{
			if(p_turn_changer==0)/*this makes the source shorter.
			instead of writing code one time with x and one time with o we write the code for a character and then switch it between x and o*/
			{
				p_r_definer='X';
			}
			if(p_turn_changer==1)
			{
				p_r_definer='O';
			}
			
			
			while(b==0)
			{/*this makes a loop till the player enter a right number*/
				x_o_position=0;
				printf("PLAYER %d :Please enter the position you want to place %c -------> ",p_turn_changer+1,p_r_definer);
				scanf("%f",&x_o_position);
			
				for(j=1;j<10;j++)
				{
					if(x_o_position==j)
					{
						b++;/*this cause break the loop of getting right number*/
					}
				}
					
				if(b==0)
				{
					printf("Please enter a number from 1 to 9.\n");
					fflush(stdin);
				}	
				
				if(x_o_position==1&&(column1_row1=='X'||column1_row1=='O'))
				{/*checking if choosed place is empty or not*/
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==2&&(column2_row1=='X'||column2_row1=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==3&&(column3_row1=='X'||column3_row1=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==4&&(column1_row2=='X'||column1_row2=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==5&&(column2_row2=='X'||column2_row2=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==6&&(column3_row2=='X'||column3_row2=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==7&&(column1_row3=='X'||column1_row3=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==8&&(column2_row3=='X'||column2_row3=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
				if(x_o_position==9&&(column3_row3=='X'||column3_row3=='O'))
				{
					b=0;
					printf("This place have been taken .please choose another one.\n");
				}
			}
			
			system("@cls||clear"); /*this makes the game display better .we can omit it.*/
			b=0;
			
			if(x_o_position==1)	
			{/*these lines save user input in game table*/
				column1_row1=p_r_definer;
			}
			if(x_o_position==2)
			{
				column2_row1=p_r_definer;
			}
			if(x_o_position==3)	
			{
				column3_row1=p_r_definer;
			}
			if(x_o_position==4)	
			{
				column1_row2=p_r_definer;
			}
			if(x_o_position==5)	
			{
				column2_row2=p_r_definer;
			}
			if(x_o_position==6)	
			{
				column3_row2=p_r_definer;
			}
			if(x_o_position==7)
			{
				column1_row3=p_r_definer;
			}
			if(x_o_position==8)	
			{
				column2_row3=p_r_definer;
			}
			if(x_o_position==9)	
			{
				column3_row3=p_r_definer;
			}
			
			printf("\n     |     |     \n");
			printf("  %c  |  %c  |  %c  \n",column1_row3,column2_row3,column3_row3);
			printf("_____|_____|_____\n");
			printf("     |     |     \n");
			printf("  %c  |  %c  |  %c  \n",column1_row2,column2_row2,column3_row2);
			printf("_____|_____|_____\n");
			printf("     |     |     \n");
			printf("  %c  |  %c  |  %c  \n",column1_row1,column2_row1,column3_row1);
			printf("     |     |     \n\n");
			
			if((column1_row1=='X'&&column2_row2=='X'&&column3_row3=='X')||(column1_row1=='X'&&column1_row2=='X'&&column1_row3=='X')
			||(column2_row1=='X'&&column2_row2=='X'&&column2_row3=='X')||(column3_row1=='X'&&column3_row2=='X'&&column3_row3=='X')
			||(column1_row1=='X'&&column2_row1=='X'&&column3_row1=='X')||(column1_row2=='X'&&column2_row2=='X'&&column3_row2=='X')
			||(column1_row3=='X'&&column2_row3=='X'&&column3_row3=='X')||(column1_row3=='X'&&column2_row2=='X'&&column3_row1=='X'))
			{	
				printf("******************************************\n");
				printf("** Player 'X' (player %d) is the winner. **\n",p_turn_changer+1);
				printf("******************************************\n\n");
				game_continue=0;
			}
			if((column1_row1=='O'&&column2_row2=='O'&&column3_row3=='O')||(column1_row1=='O'&&column1_row2=='O'&&column1_row3=='O')
			||(column2_row1=='O'&&column2_row2=='O'&&column2_row3=='O')||(column3_row1=='O'&&column3_row2=='O'&&column3_row3=='O')
			||(column1_row1=='O'&&column2_row1=='O'&&column3_row1=='O')||(column1_row2=='O'&&column2_row2=='O'&&column3_row2=='O')
			||(column1_row3=='O'&&column2_row3=='O'&&column3_row3=='O')||(column1_row3=='O'&&column2_row2=='O'&&column3_row1=='O'))
			{
		        printf("******************************************\n");
				printf("** Player 'O' (player %d) is the winner. **\n",p_turn_changer+1);
				printf("******************************************\n");		
				game_continue=0;
			}
			if(column1_row1!=' '&&column1_row2!=' '&&column1_row3!=' '&&column2_row1!=' '&&column2_row2!=' '&&column2_row3!=' '
			&&column3_row1!=' '&&column3_row2!=' '&&column3_row3!=' '&&game_continue==1)
			{
		        printf("*****************************\n");
				printf("** The game has no winner .**\n");
				printf("*****************************\n");	
				game_continue=0;
			}
			
			if(p_turn_changer==0)/*here we switch players turn*/
			{
				p_turn_changer=1;
			}
			else
			{
				p_turn_changer=0;
			}
		}
	
		printf("If you want to play again enter 'a' .and if you want to end the game enter 'e' .\n");
		scanf("%s",&again_end);
		if(again_end!='a'&&again_end!='e')
		{
			printf("You can just enter 'e' or 'a'.--->");
		}
		while(again_end!='a'&&again_end!='e')/*this loop force player to press a right character*/
		{
			scanf("%s",&again_end);
			if(again_end!='a'&&again_end!='e')
			{
				printf("You can just enter 'e' or 'a'.--->");
			}
		}
		if(again_end=='a')
		{
			p_turn_changer=0;
			system("@cls||clear"); /* this makes the game display better .we can omit it.*/
			printf("\n\n@@ NEW GAME @@\n\n");
		}
	}
	system("@cls||clear"); /* this makes the game display better .we can omit it.*/
	printf("THANKS FOR PLAYING THIS GAME.\n\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("$$ AMIRMOHAMMAD KHOSRAVI $$\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

	return 0;
}
