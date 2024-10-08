//Header files and namespaces
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Code Shorteners
typedef long long ll;
#define S second
#define F first
#define PB push_back
#define MP make_pair
#define len(s) (int)(s).size()
#define for(i, a, b) for(int i = a; i <= b; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0); 
#define double long double
#define si set <int>
#define vi vector <int>
#define pii pair <int, int>
#define vpi vector <pii>
#define vpp vector <pair<int, pii>>
#define mii map <int, int>
#define mpi map <pii, int>
#define spi set <pii>
#define que_max priority_queue <int>
#define que_min priority_queue <int, vi, greater<int>>
#define bug(...) __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a) for(auto x : a) cout << x << " "; cout << endl
#define print1(a) for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y) for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
ll mod = 1000000007;

void solve()
{
    int a,b;
    a = 10; b = 20;
    cout<< a << " " << b << endl;
    
}

int main()
{
    fast;

#ifdef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    clock_t z = clock();
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}

