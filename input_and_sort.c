#include<stdio.h>

int main()
{
    int n, q, i, j, temp;
    scanf("%d", &n);

    // storing item price in the array
    int item_price[n];

    // sorting the item_price array in decreasing order
    for (i = 0; i < n; i++)
    {
        scanf("%d", &item_price[i]);
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

    for(i = 0; i < n; i++)
    {
        printf("%d ", item_price[i]);
    }
}
