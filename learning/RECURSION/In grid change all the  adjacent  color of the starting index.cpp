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

int arr[100][100];
int ans[100][100];

// input :
// 3 4
// 3 2
// 0 0 0 1
// 0 1 0 1
// 1 0 0 1

// output: // starting index are thre 3 2 and chnage all the color which is '0' adjacent to 2
// 2 2 2 1
// 2 1 2 1
// 1 2 2 1


void change_colour( int sr , int sc , int n , int m , int colour)
{
    if (sr < 0 || sr >= n || sc < 0 || sc >= m )
    {
        return;
    }

    if (arr[sr][sc] == colour)
    {
        arr[sr][sc] = 2;
        change_colour(sr - 1, sc, n, m, colour);
        change_colour(sr + 1, sc, n, m, colour);
        change_colour(sr, sc - 1, n, m, colour);
        change_colour(sr, sc + 1, n, m, colour);
    }

    return;

}

void test_case()
{

    int n, m;
    cin >> n >> m;
    int sr, sc;
    cin >> sr >> sc;


    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }


    change_colour(sr - 1, sc - 1, n, m , arr[sr - 1][sc - 1]);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << arr[i][j] << " ";
        } nl;
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

    while (test_number--)
    {

        test_case();

    }

    return 0;
}