#include <stdio.h>


int main() {
    int n = 0;
    int cc[100][2];


    while (scanf("%d %d", &cc[n][0], &cc[n][1]) != EOF)
{
    n++;
}
     for (int i = 0; i < n - 1; i++)
{
        for (int j = i + 1; j < n; j++)
{
            if (cc[i][1] > cc[j][1])
{
            int bs = cc[i][0];
            int bd = cc[i][1];
            cc[i][0] = cc[j][0];
            cc[i][1] = cc[j][1];
            cc[j][0] = bs;
            cc[j][1] = bd;
}
}
}


    int cars = 1;
    int back = cc[0][1];
    int nn[100];


    for (int i = 0; i < n; i++)
{
        nn[i] = 1;
}


    for (int i = 1; i < n; i++)
{
    if (cc[i][0] >= back)
{
        back = cc[i][1];

}
    else
{
        cars++;
        nn[i] = cars;
}
}


    printf("%d\n", cars);
    for (int i = 1; i <= cars; i++) {
        printf("Driver %d's schedule is", i);
    for (int j = 0; j < n; j++)
{
    if (nn[j] == i)
{
    printf(" %d %d", cc[j][0], cc[j][1]);
}
}
    printf("\n");
}
}

