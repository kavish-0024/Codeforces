#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int total=0;
int dfs(int n, int m)
{
    int i;
    if(n==m)
    {
        return 1;
    }

    for(i=2;i<=3;++i)
    {
        if(n*i<=m)
        {
            n *= i;
            total++;
            if(dfs(n,m))
                return 1;
            n /= i;
            total--;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int main()
{
    int n,m;
    cin >> n >> m;
    if(m==n)
    {
        cout << "0" << endl;
        return 0;
    }
    if(!dfs(n,m)) 
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << total << endl;
    return 0;
}