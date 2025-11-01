#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    vector<vector<int>>mat(5,vector<int>(5,0));
    int ti,tj;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                ti=i;
                tj=j;
            }
        }
    }
    ti=abs(2-ti);
    tj=abs(2-tj);
    cout<<ti+tj<<endl;
}