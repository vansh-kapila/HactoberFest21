/* Author : VANSH KAPILA */

/* "The greatest glory in living lies not in never falling, but in rising every time we fall." -*/ 
#include <bits/stdc++.h> 
#define pb(x) push_back(x) 
#define all(x) x.begin(), x.end() 
#define debug(x) cout << '>' << #x << ':' << x << endl; 
#define int long long 
#define ld long double 
#define endl "\n"; 
 
const int mod = 1000000007; 
using namespace std; 
  
  
int32_t main(){ 
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL); 

    int test; 
    cin>>test; 
    vector<int> prime;
    prime.push_back(2);
    prime.push_back(3);
    for(int i=5;i<100000;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        prime.push_back(i);
    }
    while(test--){  
        
        int a,b;
        cin>>a>>b;
        int count = 1000;
        int dup = b;
        b=b%a;
        while(b!=0 and count!=0)
        {
            b=(b*dup)%a; 
            count--;
        }
        
        if(b%a==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
       
    } 
    return 0; 
    } 
