#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rockpaperscissor(char user, char cpu)
{
    if (user == cpu)
    {
        return -1;
    }

    if (user == 'r' && cpu == 's')
    {
        return 1;
    }
    else if (user == 's' && cpu == 'r')
    {
        return 0;
    }

    if (user == 'p' && cpu == 'r')
    {
        return 1;
    }
    else if (user == 'r' && cpu == 'p')
    {
        return 0;
    }

    if (user == 's' && cpu == 'p')
    {
        return 1;
    }
    else if (user == 'p' && cpu == 's')
    {
        return 0;
    }
}

int main()
{
    char user, cpu;

    srand(time(0));
    int randnum = rand() % 3 + 1;

    if (randnum == 1)
    {
        cpu = 'r';
    }
    else if (randnum == 2)
    {
        cpu = 'p';
    }
    else
    {
        cpu = 's';
    }

    printf("Enter your response-\n");
    printf("Press 'r' for rock.\n");
    printf("Press 'p' for paper.\n");
    printf("Press 's' for scissor.\n");
    printf("Waiting for response: ");
    scanf("%c", &user);
    printf("=================================================\n");
    printf("You chose %c and cpu chose %c.\n", user, cpu);

    int result = rockpaperscissor(user, cpu);

    if (result == 1)
    {
        printf("Your Won :)\n");
    }
    else if (result == 0)
    {
        printf("You lose :(\n");
    }
    else
    {
        printf("Draw :/\n");
    }
    printf("=================================================\n");

    return 0;
}