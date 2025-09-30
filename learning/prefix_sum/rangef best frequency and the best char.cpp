#include <bits/stdc++.h>
#define newline         cout<<'\n';
#define space           cout<<' ';
#define print(s)        cout<<s;
#define sc              scanf
#define ll              long long
#define sc1(n)          sc("%d",&n)
#define sc2(n, m)       sc("%d%d", &n, &m);
#define all(x)          (x).begin(), (x).end()
#define printarry(a)    for(auto it : a) cout<<it<<' ';
#define Fast            ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dbg(x)          cout<<"line " << __LINE__ << " says: " << #x << " = " << x << "\n";






using namespace std;





//-----------------------------------------------------------------------------------------------------------------------------------
//                                                  PRACTICE AND LEARN                                                                                         
//-----------------------------------------------------------------------------------------------------------------------------------

//range frequency and  best char

void test_case()
{
       string s;
       cin >> s;
       int n= s.size();

       vector< vector<int> > pref(n+1 , vector<int>(26,0) );

       //build frequency in per step
       for (int i = 0; i < n; ++i)
       {
            pref[i+1]=pref[i];
            int char_id = s[i]-'a';
            pref[i+1][char_id]++;
       }


       int q;
       cin >> q;

       for (int i = 0; i < q; ++i)
       {
           int l,r;
           cin >> l >> r;

           char best_char = '?';
           int best_freq = -1;

           for (int j = 0; j < 26; ++j)
           {
                int freq = pref[r+1][j] - pref[l][j];
                if(freq > best_freq)
                {
                    best_freq = freq;
                    best_char = 'a'+ j;
                }
           }
           cout <<"best fre char is = "<<best_char<<"   and freq is = "<<best_freq;
           newline

       }



       //print the 2d array ----->

       // for (int i = 0; i <= n; ++i) 
       // {
       //  for (int j = 0; j < 26; ++j) 
       //  {
       //      cout << pref[i][j] << " ";
       //  }
       //      newline
       //  }


    newline
    return;

}




int main()
{

#ifdef NAYEEM

    int start_time = clock();
    int end_time = clock();
    printf("Time = %.4f\n", (end_time - start_time + 0.0) / CLOCKS_PER_SEC);
    
#endif

    int test_number = 1;
    sc1(test_number);

    while (test_number--)
    {
      
        test_case();

    }

    return 0;
}