#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
using vl= vector<ll>;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        ll count=0;
        F(i, 0, 10)
        {
            cin >> s;
            
            for(int j = 0; j < 10; j++)
            {
                if (s[j] == 'X')
                {
                    int rdist = min(i, 9 - i);
                    int cdist = min(j, 9 - j);
                    
                    int score = min(rdist, cdist) + 1;
                    
                    count += score;
                }
            }
        }
        
        cout << count << "\n";
    }
    return 0;
}