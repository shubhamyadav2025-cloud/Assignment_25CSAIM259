#include <stdio.h>
int main() 
{
    int answer, score = 0;

    printf("Quiz Application\n\n");

    printf("1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Kolkata  4.Chennai\n");
    scanf("%d", &answer);
    if (answer == 1)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1.Dennis Ritchie  2.James Gosling  3.Bjarne Stroustrup  4.Guido van Rossum\n");
    scanf("%d", &answer);
    if (answer == 1)
        score++;

    printf("\n3. 2 + 5 = ?\n");
    printf("1.5  2.6  3.7  4.8\n");
    scanf("%d", &answer);
    if (answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}