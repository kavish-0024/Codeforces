#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F(i,s,e) for(ll i=s;i<e;i++)
#define FR(i,e,s) for (ll i=e;i>=s;i--)
#define vl vector<ll>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#include <iomanip> 

int main()
{
    IOS;
    
    int h1, m1, h2, m2, h_mid, m_mid; 
    char colon;
    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;

    int duration =t2 - t1;
    int mid_minutes = t1 + (duration / 2);
    
    h_mid = mid_minutes / 60;
    m_mid = mid_minutes % 60;
    
    cout << setfill('0') << setw(2) << h_mid;
    cout << ":";
    cout << setfill('0') << setw(2) << m_mid << "\n";

    return 0; 
}