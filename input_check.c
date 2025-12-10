#include <stdio.h>

int input_check(int *a)
{
    int res = scanf("%d", a);
    if (res != 1)
    {
        return 0;
    }

    char extra = getchar();
    if (extra != '\n' && extra != EOF)
    {
        return 0;
    }

    return 1;
}

int main(void)
{
    int a;

    if (!input_check(&a))
    {
        printf("n/a\n");
        return 0;
    }

    printf("\nOK\n%d\n", a);
    return 0;
}
