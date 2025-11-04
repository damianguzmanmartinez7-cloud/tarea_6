#include <stdio.h>

int main()
{
    int N;

    printf("\tIngrese el número hasta donde se evaluará la serie FizzBuzz: ");
    scanf("%d", &N);
    printf("\t");
    for (int i = 1; i < N + 1; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            i != N ? printf("FizzBuzz, ") : printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            i != N ? printf("Fizz, ") : printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            i != N ? printf("Buzz, ") : printf("Buzz\n");
        }
        else
        {
            i != N ? printf("%d, ", i) : printf("%d\n", i);
        }
    }

    return 0;
}
