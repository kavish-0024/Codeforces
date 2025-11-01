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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        int flag=0;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
                continue;
            }
            else if(abs(s[i]-s[j])==2)
            {
                i++;
                j--;
                continue;
            }
            else
            {
                flag=1;
                break;
            }
            i++;
            j--;
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}