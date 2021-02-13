#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char *ptr;
    int userchoice, pcchoice, user_points = 0, pc_points = 0;
    int a;
    ptr = (char *)malloc((a + 1) * sizeof(char));
    printf("How many characters are there in ur name? \n");
    scanf("%d", &a);
    getchar();
    srand(time(NULL));
    printf("Enter your Name :\n");
    gets(ptr);
    printf("\nHello %s Lets play the game now...\n", ptr);
    //getchar();
    printf("\nThere will be 3 Rounds...");
    for (int i = 0; i < 3;i++)
    {
        printf("\nChoose any one of these :\nPress :\n1 FOR Stone\n2 FOR Paper\n3 FOR Scissor\n");
        scanf("%d", &userchoice);
        pcchoice = (rand() % 2) + 1;

        if (userchoice == pcchoice)
        {
            printf("Uhh u both chose same thing. Lets do it again..\n");
            i--;
        }
        else if (pcchoice == 1)
        {
            printf("Computer chose Stone\n");
        }
        else if (pcchoice == 2)
        {
            printf("Computer chose Paper\n");
        }

        else
        {
            printf("Computer chose Scissor\n");
        }

        if (userchoice == 1 && pcchoice == 3 && userchoice != pcchoice)
        {
            printf("You won!\n");
            user_points++;
        }
        else if (userchoice == 1 && pcchoice == 2 && userchoice != pcchoice)
        {
            printf("Computer won! \n");
            pc_points++;
        }
        else if (userchoice == 2 && pcchoice == 1 && userchoice != pcchoice)
        {
            printf("You won!\n");
            user_points++;
        }
        else if (userchoice == 2 && pcchoice == 3 && userchoice != pcchoice)
        {
            printf("Computer won!\n");
            pc_points++;
        }
        else if (userchoice == 3 && pcchoice == 1 && userchoice != pcchoice)
        {
            printf("Computer won!\n");
            pc_points++;
        }
        else if (userchoice == 3 && pcchoice == 2 && userchoice != pcchoice)
        {
            printf("You won!\n");
            user_points++;
        }
    }
    if (user_points > pc_points)
    {
        printf("\nCongratulations Dude!! YOU WON THE GAME...\n");
    }
    else
    {
        printf("\nComputer won Dude!!Try next time... \n");
    }
    printf("Your Score\tComputer Score\n");
    printf("%d\t\t%d\n", user_points, pc_points);

    return 0;
}