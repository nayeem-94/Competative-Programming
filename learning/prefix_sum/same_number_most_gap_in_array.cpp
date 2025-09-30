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

//find the most gap by a same number  in a array 

void test_case()
{
       int n;
       cin >> n;
       std::vector<int> v(n);
       for (int i = 0; i < n; ++i)
       {
           cin >> v[i];
       }
       
       vector<int> v1(7,-1);

       int ans =0;
       printarry(v1)newline

       for (int i = 0; i < n; ++i)
       {
        cout <<"here_i_is : "<<i <<" the_array_ is : "<<v[i]<<" ---->";space
           if( v1[ v[i] ] == -1 )
           {
                v1[v[i]]=i; printarry(v1)newline

           }
           else
           {
                ans = max (ans , i-v1[v[i]]); printarry(v1)newline
           }
       }

       // printarry(v1)newline

       newline
       cout << ans ;

       

      

    



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