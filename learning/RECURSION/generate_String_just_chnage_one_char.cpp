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
int n;
vector<string>ans;

void generate_all_case(string s , int id)
{
    if (id == n)
    {
        ans.push_back(s);
        return;
    }

    if (isalpha(s[id]))
    {

        s[id] = toupper(s[id]);
        generate_all_case(s , id + 1);

        s[id] = tolower(s[id]);
        generate_all_case(s , id + 1);

    }
    else
    {
        generate_all_case(s, id + 1);
    }


}


void test_case()
{
    string s;
    cin >> s;
    
    n = s.size();

    generate_all_case( s, 0);

    for (auto it : ans)
    {
        cout << it << " ";
    }











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