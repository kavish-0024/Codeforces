// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define F(i,s,e) for(ll i=s;i<e;i++)
// #define FR(i,e,s) for (ll i=e;i>=s;i--)
// #define vl vector<ll>
// #define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

// int main()
// {
//     IOS;
//     int n;
//     cin>>n;
//     vl x(n,0);
//     vl y(n,0);
//     vl z(n,0);
//     for(int i=0;i<n;i++)
//     cin>>x[i]>>y[i]>>z[i];

//     ll sum1=0,sum2=0,sum3=0;
//     F(i,0,n)
//     {
//         sum1+=x[i];
//         sum2+=y[i];
//         sum3+=z[i];
//     }
//     if(!sum1 && !sum2 && !sum3)
//     cout<<"YES"<<endl;
//     else
//     cout<<"NO"<<endl;
// }

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
    int n;
    cin>>n;
    vl x(n,0);
    vl y(n,0);
    vl z(n,0);
    ll x_sum = 0, y_sum = 0, z_sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        x_sum += x[i];
        y_sum += y[i];
        z_sum += z[i];
    }

    if(x_sum == 0 && y_sum == 0 && z_sum == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}