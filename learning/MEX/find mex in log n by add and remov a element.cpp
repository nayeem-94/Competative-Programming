#include <bits/stdc++.h>
using namespace std;

const int MAXA = 300000; // maximum value of array elements
int freq[MAXA + 2];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    // initial MEX
    int mex = 0;
    while (freq[mex] > 0) mex++;

    while (q--) {
        int rem, add;
        cin >> rem >> add;
        // remove element
        freq[rem]--;
        if (rem < mex && freq[rem] == 0) mex = rem;

        // add element
        freq[add]++;
        while (freq[mex] > 0) mex++;

        cout << mex << "\n";
    }

    return 0;
}
