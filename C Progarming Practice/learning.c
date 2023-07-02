#include <stdio.h>

int arraystore(int array[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("enter a number ");
        scanf("%d ", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" the value of %d is %d\n", i, array[i]);
    }
}
int pattern()
{
    int a;
    printf("enter a number a for star pattern ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
int tabel()
{
    int a;
    printf("eneter a number as want table ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", a, i, a * i);
    }

    return 0;
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        /* code */

        printf("enter a number for storing data in arrray (1) for printing star pattern (2) for tabel (3) ");
        int a;
        scanf("%d", &a);
        if (a == 1)
        {
            int arr[5];
            arraystore(arr);
        }
        if (a == 2)
        {
            pattern();
        }
        if (a == 3)
        {
            tabel();
        }

        return 0;
    }
}