#include <stdio.h>

void QuickSort(long long int a[], int left, int right)
{
    int i = left;
    int j = right;
    int temp = a[i];

    if( left < right)
    {
        while(i < j)
        {
            while(a[j] <= temp && i < j)
            {
                j--;
            }
            a[i] = a[j];
            while(a[i] >= temp && i < j)
            {
                i++;
            }

            a[j] = a[i];
            }
            a[i] = temp;

            QuickSort(a, left, i - 1);
            QuickSort(a, j + 1, right);
    }
}

int main()
{
    int n, q, i, j, temp;
    // geting the number of items(n) and the number of queries(q)
    scanf("%d%d", &n, &q);

    // array for storing item price
    long long int item_price[n];

    // array for calculating cumulative sum
    long long int c_sum[n + 1];

    // storing item price in the array
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &item_price[i]);
    }

    // sorting the item_price array in decreasing order
    QuickSort(item_price, 0, n-1);

    // calculating cumulative sum
    c_sum[0] = item_price[0];

    for (i = 1; i <= n; i++)
    {
        c_sum[i] = c_sum[i - 1] + item_price[i - 1];
    }

    // running queries q times
    for (i = 0; i < q; i++)
    {
        int x = 0, y = 0;
        long long total;
        scanf("%d%d", &x, &y);

        // calculating the price of the free items
        total = c_sum[x] - c_sum[x - y];
        printf("%lld\n", total);
    }

    return 0;
}
