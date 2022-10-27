#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp)
{
    // return 1 if you win return -1 if you loose and return 0 for draw
    // Draw cases
    // Cases covred
    // ss
    // gg
    // ww
    if (you == comp)
    {
        return 0;
    }
    // Cases when not draw
    // Covered cases
    // sp
    // ps
    // p.sci
    // s,p
    // s,sci
    // sci,s
    if (you == 's' && comp == 'p')
    {
        return -1;
    }
    else if (you == 'p' && comp == 's')
    {
        return 1;
    }
    if (you == 'p' && comp == 'x')
    {
        return -1;
    }
    else if (you == 'x' && comp == 'p')
    {
        return 1;
    }
    if (you == 'x' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'x')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 6 + 1;
    if (number <= 2)
    {
        comp = 's';
    }
    if (number > 2 && number <= 4)
    {
        comp = 'p';
    }
    else
    {
        comp = 'x';
    }

    printf("Enter s for stone and p for papper and x for scissor: ");
    scanf("%c", &you);
    int result = snakeWaterGun(you, comp);
    printf("You choose %c and computer choose %c\n", you, comp);
    if (result == 0)
    {
        printf("Game Draw!\n");
    }
    else if (result == 1)
    {
        printf("You won!\n");
    }
    else
    {
        printf("You Loose!\n");
    }

    return 0;
}