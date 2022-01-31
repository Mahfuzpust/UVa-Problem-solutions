#include <cstdio>

int main()
{
    int T, pos, current, Y;

    char cards[52][3];

    scanf("%d", &T);

    for (int t = 1; t <= T; ++t)
    {
        Y = 0;
        pos = 52 - 25;

        for (int i = 0; i < 52; ++i)
            scanf("%s", cards[i]);


        printf("Case %d: %s\n", t, cards[32]);

    }
}
