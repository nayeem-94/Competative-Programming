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

int segment_count(string s)
{
    bool x10 = false, x01 = false;

    for (int i = 0; i < s.size() - 1; ++i)
    {
        if (s[i] == '0' && s[i + 1] == '1') x01 = true;
        if (s[i] == '1' && s[i + 1] == '0') x10 = true;
    }

    int x0 = 0, x1 = 0;
    for (int i = 0; i < s.size() ; ++i)
    {
        if (i == 0 || s[i] != s[i - 1])
        {
            if (s[i] == '0')x0++;
            else if (s[i] == '1')x1++;
        }
    }
    if (s[s.size() - 1] == '1') x1--;
    int mn = min(x0, x1);

    if (mn == 1)
    {
        if (x01 == true && x10 == true) return 1;
        else if (x01 == true) return 0;
        else return 1;
    }
    else return mn;

}

void test_case()
{
    string s = " 0011101";

    int x = segment_count(s);

    cout << x;







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