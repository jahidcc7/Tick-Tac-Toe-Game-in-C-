#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<string.h>
#define MAX 9
//jahidcc7
char box[9]={'1','2','3','4','5','6','7','8','9'};
int win=0;

int input_P1(int player_count);
int input_P2(int player_count);
int play_board(char box[]);
int check_win();

int main()
{
    menu:
    system("color 0a");
    //jahidcc7
    int pl[MAX];
    int j=1,k=1;
    int tmp_input;
    
    for (int i = 0; i < MAX; i++)
    {
        if(i%2==0)
        {
            
            stm1:
            system("cls");
            play_board(box);
            printf("Enter 1st players move no %d:",j);
            
            scanf("%d",&pl[i]);
            if(pl[i]<1 || pl[i]>9) goto stm1; 

            for (int r = 0; r < i; r++)
            {
                if(pl[i]==pl[r]) goto stm1;
            }

            j++;
            input_P1(pl[i]);
            if (k>=3)
            check_win();
        }
        if(i%2==1)
        {
            stm2:
            system("cls");
            play_board(box);
            
            printf("Enter 2nd players move no %d:",k);
            
            scanf("%d",&pl[i]);
            if(pl[i]<1 || pl[i]>9) goto stm2;
            for (int r = 0; r < i; r++)
            {
                if(pl[i]==pl[r]) goto stm2;
                
            }
            k++;
            input_P2(pl[i]);
            if (k>=3)
            check_win();
        }
    }
    return 0;
}

int play_board(char box[])
{
          
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",box[0],box[1],box[2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",box[3],box[4],box[5]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n",box[6],box[7],box[8]);
    printf("     |     |     \n");
}
//jahidcc7
int input_P1(int player_count)
{
        box[player_count-1]='X';
}

int input_P2(int player_count)
{
        box[player_count-1]='O';
}


int check_win()
{
    char ch;

if(box[0]==box[4]&&box[0]==box[8])
{
    if(box[0]=='X')win=1;
    if(box[0]=='O')win=2;
}
if (box[0]==box[3]&&box[0]==box[6])
{
    if(box[0]=='X')win=1;
    if(box[0]=='O')win=2;
}
if (box[0]==box[1]&&box[0]==box[2])
{//jahidcc7
    if(box[0]=='X')win=1;
    if(box[0]=='O')win=2;
}
if (box[1]==box[4]&&box[1]==box[7])
{
    if(box[1]=='X')win=1;
    if(box[1]=='O')win=2;
}
if (box[2]==box[4]&&box[2]==box[6])
{
    if(box[2]=='X')win=1;
    if(box[2]=='O')win=2;
}
if (box[2]==box[5]&&box[2]==box[8])
{
    if(box[2]=='X')win=1;
    if(box[2]=='O')win=2;
}
if (box[3]==box[4]&&box[3]==box[5])
{
    if(box[3]=='X')win=1;
    if(box[3]=='O')win=2;
}
if (box[6]==box[7]&&box[6]==box[8])
{
    if(box[6]=='X')win=1;
    if(box[6]=='O')win=2;
}
    
printf("\nCongratulations!!\n");
 if (win==1)
 {
    system("cls");
            play_board(box);
    printf("\n\nPlayer 1 won the game!!\n");printf("\n\n\tGOOD BYE\n\n");
          
          exit();
 }
 else if (win==2)
 {
    system("cls");
            play_board(box);
    printf("\n\nPlayer 2 won the game!!\n");
    printf("\n\n\tGOOD BYE\n\n");
          
          exit();
 }
 

 /*
 {
    
        printf("No one won the game !!\n");
        do
        {
           printf("Do you want to play the game again ? [y/n] :");
           scanf("%c",&ch);
        } while (ch!='y'&&ch!='n');

        if (ch=='y')
        {
            //goto menu;
        }
        if (ch=='n')
        {
          printf("\n\n\tGOOD BYE\n\n");
          Sleep(999999);
          exit(1);
        }
        
 }
 */
   
}
    