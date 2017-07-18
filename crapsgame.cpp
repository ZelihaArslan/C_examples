#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void play_craps();

int main(void)
{
    char answer,junk;
    do
    {
        printf("\n\n\n");
        printf("Would you like to play a game of craps/? Type y for yes"
               " or n for no:");
        answer=getchar();
        junk=getchar();
        if(answer=='y' || answer=='Y')
            play_craps();
    }while(answer=='y' || answer=='Y');

system("pause");
return 0;
}

void play_craps()
{
    int rand_int(int a, int b);
    srand(time(NULL));

    int die_1,die_2,die_3,die_4,roll,roll_2;

    die_1=rand_int(1,6);
    die_2=rand_int(1,6);
    roll=die_1 + die_2;
    printf("You rolled a %i\n",roll);

    if(roll==7 || roll==11)
        {
            printf("You Win!\n");
            return;
        }
    else if(roll==2 || roll==3 || roll==12)
        {
            printf("You Lose\n");
            return;
        }
    else
        {
            do
            {

                die_3=rand_int(1,6);
                die_4=rand_int(1,6);
                roll_2=die_3 + die_4;
                printf("You rolled a %i\n",roll_2);
                if(roll_2==roll)
                 {
                     printf("You Win");
                     return;
                 }
            }while(roll_2 != 7);

        printf("You Lose");
        }

}
int rand_int(int a, int b)
{

    return rand()%(b-a+1)+a;
}
