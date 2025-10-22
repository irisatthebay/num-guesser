#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;

    //printf("The random number is: %d\n", random_number);
    int a;
    int guess=0;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &a);
        if (a>random_number)
        {
            printf("The entered number is higher than the random no. \n");
        }
        else if (a<random_number)
        {
            printf("The entered number is lower than the random no. \n");
        }
        guess++;
        
        
        
        
    } while (a!=random_number);
    printf("You have entered the correct number and it took you %d guesses", guess);
    
    

    return 0;
}
