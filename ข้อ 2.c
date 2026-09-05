#include <stdio.h>

int main(void)
{
    int score;
    int sum = 0;

    do
    {
        printf("Enter score");
        scanf("%d", &score);

        if (score != -1)
        {
            sum += score;
        }

    } while (score != -1);
    printf("Total score = %d\n", sum);

    return 0;
}