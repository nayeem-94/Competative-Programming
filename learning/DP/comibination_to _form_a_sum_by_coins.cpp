#include <bits/stdc++.h>

#define nl              cout<<'\n';
#define space           cout<<' ';
#define print(s)        cout<<s;

#define ll              long long
#define all(x)          (x).begin(), (x).end()
#define Point(x,y)      setprecision((y))<<fixed<<(x)

#define yes             cout<<"YES\n";
#define no              cout<<"NO\n";

#define Fast            ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x)          cout<<"line " << __LINE__ << " says: " << #x << " = " << x << "\n";

#define printarry(a)    for(auto it : a) cout<<it<<' ';
#define put_array(x,n)  for (int i = 0; i < n; ++i) cin >> x[i];

#define MOD 1000000007


using namespace std;





//-----------------------------------------------------------------------------------------------------------------------------------
//                                                  PRACTICE AND LEARN                                                                                         
//-----------------------------------------------------------------------------------------------------------------------------------

int dp[1000005];

//there are some coin and how many aways i can form a sum s by these coin

void test_case()
{
       
        ll n,s;
        cin >> n >> s;

        int coin[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> coin[i];
        }

       
        dp[0]=1;
        
        for (int i = 0; i <= s; ++i)
        {
            for (int j = 0; j < n ; ++j)
            {
                if (i>=coin[j])
                {
                    dp[i] += dp[i-coin[j]] ;
                    if (dp[i] >= MOD) 
                    dp[i]=dp[i]%MOD;
                }
                
            }
        }

        cout << dp[s];

    



    nl
    return;

}




int32_t main()
{
    Fast;

#ifdef NAYEEM

    int start_time = clock();
    int end_time = clock();
    printf("Time = %.4f\n", (end_time - start_time + 0.0) / CLOCKS_PER_SEC);
    
#endif

    int test_number = 1;
    // cin >> test_number;

    while (test_number--)
    {
      
        test_case();

    }

    return 0;
}