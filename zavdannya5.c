#include <stdio.h>
#include <stdlib.h>

int get_random_int_min_max(int min_rand, int max_rand)
{
    return min_rand + rand() % (max_rand - min_rand);
}

int main()
{
    int mas[100];
    int n = 20, i;
    int x;

    int position_x;

    srand(time(0));

    for (i = 0; i < n; i++) {
        mas[i] = get_random_int_min_max(0, 100);
    }

    for (i = 0; i < n; i++) {
        printf("mas[%d]=%d\n", i, mas[i]);
    }

    printf("\n\tVvedite element dlya poiska\nx=");
    scanf("%d", &x);
    position_x = poisk(mas, n, x);

    return 0;
}

int poisk(int * mas, int n, int x)
{
    int i;
    for (i = 0; i < n; i++) {
        if (mas[i] == x) {
            printf("The number %d of the position %d\n", mas[i], i);
        }
    }
}
