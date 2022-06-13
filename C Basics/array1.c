#include <stdio.h>
int main()
{
    int a[50], odd[50], even[50], i, k = 0, m, n, sum = 0;
    printf("How many number : ");
    scanf("%d", &n);
    printf("Put %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        if (m % 2 == 0)
        {
            even[i] = m;
        }
        else
        {
            odd[i] = m;
        }
        k++;
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}