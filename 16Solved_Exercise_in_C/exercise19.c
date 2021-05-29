#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d%d", &n, &k);

    int max_And = 0;
    int max_Or = 0;
    int max_Xor = 0;
    int prev_and = max_And;
    int prev_or = max_Or;
    int prev_xor = max_Xor;
    int res1, res2, res3;

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            res1 = (i & j);
            res2 = (i | j);
            res3 = (i ^ j);

            if (res1 < k && res1 > prev_and)
            {
                max_And = res1;
                prev_and = max_And;
            }

            if (res2 < k && res2 > prev_or)
            {
                max_Or = res2;
                prev_or = max_Or;
            }

            if (res3 < k && res3 > prev_xor)
            {
                max_Xor = res3;
                prev_xor = max_Xor;
            }
        }
    }
    printf("%d\n%d\n%d", max_And, max_Or, max_Xor);

    return 0;
}