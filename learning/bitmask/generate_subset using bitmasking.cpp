#include <bits/stdc++.h>
using namespace std;

#define nl              cout<<'\n';
#define space           cout<<' ';
#define pb              push_back
#define fs              first
#define sc              second
#define pii             pair<int,int>


#define ll              long long
#define all(x)          (x).begin(), (x).end()
#define Point(x,y)      setprecision((y))<<fixed<<(x)

#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"

#define Fast            ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x)          cout<<"line " << __LINE__ << " says: " << #x << " = " << x << "\n";

#define printarry(a)    for(auto it : a) cout<<it<<' ';
#define put_array(x,n)  for (int i = 0; i < n; ++i) cin >> x[i];
#define vec(a, n)         vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];


template<typename T >    void cn(T &t) { cin >> t; }
template<typename T ,    typename... Args> void cn(T &t, Args&... args) { cin >> t; cn(args...);}
template<typename T >    void pr(const T &t) { cout << t; }
template<typename T ,    typename... Args>void pr(const T &t, const Args&... args) {cout << t << ' '; pr(args...); }







//-----------------------------------------------------------------------------------------------------------------------------------
//                                                  PRACTICE AND LEARN
//-----------------------------------------------------------------------------------------------------------------------------------

// time complexity o(n* 2^n)
//generate subset using bitmask

vector<vector<int>> subset_generation_bitmask(vector<int>&v)
{
    int n = v.size();
    int subset_size = (1 << n);

    vector< vector<int> > subsets_all;

    for ( int mask = 0 ; mask < subset_size ; ++mask )
    {
        vector<int>subset;
        for (int i = 0; i < n; ++i)
        {
            if ((mask & (1 << i)) != 0)
            {
                subset.push_back(v[i]);
            }
        }

        subsets_all.push_back(subset);
    }

    return subsets_all;
}

void test_case()
{

    int n;
    cin >> n;

    vector < int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    auto all_subset = subset_generation_bitmask(v);

    for (auto it : all_subset)
    {
        for (auto num :  it)
        {
            cout << num << " ";
        }
        nl;
    }





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

    for (int i = 1; i <= test_number; ++i)
    {
        // cout << "Case "<< i <<": " << "\n" ;
        test_case();
    }

    return 0;
}