#include <stdio.h>
int main()
{
    int n, q, i, j, temp;
    // geting the number of items(n) and the number of queries(q)
    scanf("%d%d", &n, &q);

    // array for storing item price
    int item_price[n];

    // array for calculating cumulative sum
    int c_sum[n + 1];

    // storing item price in the array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &item_price[i]);
    }

    // sorting the item_price array in decreasing order
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (item_price[i] < item_price[j])
            {
                temp = item_price[j];
                item_price[j] = item_price[i];
                item_price[i] = temp;
            }
        }
    }

    // calculating cumulative sum
    c_sum[0] = 0;
    for (i = 1; i <= n; i++)
    {
        c_sum[i] = c_sum[i - 1] + item_price[i - 1];
    }

    // running queries q times
    for (i = 0; i < q; i++)
    {
        int total = 0, x = 0, y = 0;
        scanf("%d%d", &x, &y);

        // calculating the price of the free items
        total = c_sum[x] - c_sum[x - y];
        printf("%d\n", total);
    }

    return 0;
}
