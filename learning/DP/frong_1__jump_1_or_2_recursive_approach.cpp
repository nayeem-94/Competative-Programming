#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5+1;
int A[mx], dp[mx];

// Recursive function with memoization to find the minimum cost to reach stone i
int min_cost(int i) 
{
    // Base case
    if (i == 0) return 0;
    if (dp[i] != -1) return dp[i];  // Return already computed result if exists
    
    // Calculate the cost to jump from the previous two stones (if possible)
    int cost = min_cost(i - 1) + abs(A[i] - A[i - 1]);
    if (i > 1) {
        cost = min(cost, min_cost(i - 2) + abs(A[i] - A[i - 2]));
    }
    
    // Save and return the computed result for stone i
    return dp[i] = cost;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) 
    {
        cin >> A[i];
        dp[i] = -1;  // Initialize dp array with -1 to indicate uncomputed values
    }

    // Find and print the minimum cost to reach the last stone
    cout << min_cost(N - 1) << endl;
    return 0;
}
