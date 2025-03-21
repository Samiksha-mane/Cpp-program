#include <iostream>
#include <algorithm> 

using namespace std;

int knapsack(int weights[], int values[], int n, int capacity)
{
    int dp[n + 1][capacity + 1];
    for (int i = 0; i <= n; ++i)
	{
        for (int w = 0; w <= capacity; ++w) 
		{
            if (i == 0 || w == 0) 
			{
                dp[i][w] = 0;
            }
        }
    }

    // Build the dp array from the top-down
    for (int i = 1; i <= n; ++i) 
	{
        for (int w = 1; w <= capacity; ++w) 
		{
            if (weights[i - 1] <= w) 
			{
                // Either include the item or exclude it
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
            } 
			else 
			{
                // If the item cannot be included, just carry forward the previous value
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    // The maximum value will be in dp[n][capacity]
    return dp[n][capacity];
}

int main() 
{
    int weights[] = {10,20,30}; 
    int values[] = {60,100,120};   
    int n = 3;                     
    int capacity = 50;              

    int max_value = knapsack(weights, values, n, capacity);
    cout << "Maximum value in Knapsack = " << max_value << endl;

    return 0;
}

