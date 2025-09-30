#include <bits/stdc++.h>

#define nl              cout << '\n';
#define space           cout << ' ';
#define print(s)        cout << s;

#define ll              long long
#define all(x)          (x).begin(), (x).end()
#define Point(x,y)      setprecision((y)) << fixed << (x)

#define yes             cout << "YES\n";
#define no              cout << "NO\n";

#define Fast            ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x)          cout << "line " << __LINE__ << " says: " << #x << " = " << x << "\n";

#define printarry(a)    for(auto it : a) cout << it << ' ';
#define put_array(x,n)  for (int i = 0; i < n; ++i) cin >> x[i];

using namespace std;

ll weight[105], value[105];
ll dp[100005];  // Increased dp array size to ensure it fits the maximum 'w' constraints

void test_case()
{
    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; ++i)
    {
        cin >> weight[i] >> value[i];
    }

    for (int i = 0; i <= w; ++i)
    {
        dp[i] = LLONG_MIN / 2;  // Prevent overflow by initializing with LLONG_MIN / 2
    }

    dp[0] = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = w; j >= weight[i]; --j)
        {
            dp[j] = max(dp[j], value[i] + dp[j - weight[i]]);
        }
    }

    cout << *max_element(dp, dp + w + 1);
    nl
}

int32_t main()
{
    Fast;

    int test_number = 1;
    // cin >> test_number;

    while (test_number--)
    {
        test_case();
    }

    return 0;
}
