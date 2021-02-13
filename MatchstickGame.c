#include <stdio.h>

int main()

{
    int user,comp; 
    printf("Total matchsticks = 21\n");
    for (int i = 16; i>=1; i = i -5)
    {
        printf("Pick any amount of matchstick(1,2,3 or 4)\n");
        scanf("%d",&user);
        comp = 5 - user;
        printf("Computer picked %d matchsticks\n", comp);
        printf("Matchsticks left= %d\n\n", i);
        if (i==1)
        {
            printf("Now pick the last one and yeah u lost!");
        }
        
    }

    return 0;
}
