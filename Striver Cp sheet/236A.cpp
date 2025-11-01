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
     string s;
     cin>>s;
    // unordered_map<char,int>mp;
    // for(int i=0;i<s.size();i++)
    // mp[s[i]]++;
    // if(mp.size()%2==0)
    // cout<<"CHAT WITH HER!"<<endl;
    // else
    // cout<<"IGNORE HIM!"<<endl;

    vector<int> c(26,0);
    int count =0 ;

    for(int i = 0;i<s.length();i++){
        c[s[i]-'a']++;
        if(c[s[i]-'a']==1) count++;
    }

    if(count%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

}