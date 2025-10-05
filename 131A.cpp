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
    string input;
    cin >> input;
    bool caps1 = true, caps2 = true; 
    if (input[0] >= 'a') {
        caps1 = false;
    }
    for (int i = 1; i < input.size(); i++) { 
        if (input[i] >= 'a') {
            caps2 = false;
        }
    }
    if (caps1 && caps2) { 
        for (int i = 0; i < input.size(); i++) {
            input[i] += 32;
        }
    }
    else if (caps1 == false && caps2) { 
        input[0] -= 32;
        for (int i = 1; i < input.size(); i++) {
            input[i] += 32;
        }
    }
    string output = input;
    cout << output; //5.
    
    return 0;
}