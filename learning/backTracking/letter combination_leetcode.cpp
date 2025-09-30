#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

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
template<typename T>     using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T>     using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;







//-----------------------------------------------------------------------------------------------------------------------------------
//                                                  PRACTICE AND LEARN
//-----------------------------------------------------------------------------------------------------------------------------------

// #define int long long
unordered_map<char, string>mp;

void solve(string digits , int i , string comp , vector<string>&ans )
{
    if (i >= digits.length())
    {
        ans.push_back(comp);
        return;
    }
    string value = mp[digits[i]];

    for (int j = 0; j < value.length(); ++j)
    {
        comp.push_back(value[j]);
        solve(digits , i + 1 , comp , ans);
        comp.pop_back();
    }
}

void test_case()
{

    string digits;
    cin >> digits;

    vector<string> ans;

    if (digits.size() == 0)
    {
        printarry(ans);
        // return ans;
    }


    mp['2'] = "abc";
    mp['3'] = "def";
    mp['4'] = "ghi";
    mp['5'] = "jkl";
    mp['6'] = "mno";
    mp['7'] = "pqrs";
    mp['8'] = "tuv";
    mp['9'] = "wxyz";

    int i = 0 ;
    string comp;

    solve(digits , i , comp , ans  );

    printarry(ans);








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

    for (int i = 1; i <= test_number; ++i)
    {
        // cout << "Case "<< i <<": " << "\n" ;
        test_case();
    }

    return 0;
}