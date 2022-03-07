#include <stdio.h>
int main()
{
    int i, j, ar[20] = {0}, n, temp, k;
    printf("element=\n");
    scanf("%d", &n);
    printf("elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &ar[i]);

    for (i = 0; i < n - 1; i++)
    {
        k = i;
        for (j = i + 1; j < n; j++)
        {

            if (ar[j]< ar[k])
            {
                k = j;
                
            }

            
        }
        if (k != i)
            {
                temp = ar[i];
                ar[i] = ar[k];
                ar[k] = temp;
            }
    }
    printf("sorted list=\n");
    for (i = 0; i < n; i++)
        printf("%d\n", ar[i]);
    return 0;
}