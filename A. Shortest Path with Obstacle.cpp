#include<bits/stdc++.h>
using namespace std;

//redjerrk

#define    pf printf

#define loop1(i,n)  for(i=1;i<=n;i++)
#define loop(i,n)   for(i=0;i<n;i++)
#define loops(i,a,n)for(i=a;i<=n;i++)
#define mem(ara,n)  memset(ara,n,sizeof(ara))
#define memb(ara)   memset(ara,false,sizeof(ara))
#define rloop       for(int i=n; i>0; i--)
#define ifor(x,n)   for(int i =int(x); i<=int(n); i++)
#define llu         unsigned long long
#define lld         long long
#define gets        getline (cin,s)
#define U           unsigned int
#define pb          push_back
#define mp          make_pair
#define pob         pop_back
#define start       int main()
#define caseT       int T,cs; cin>>T; for(cs = 1; cs<=T; cs++)
#define finish      return 0
#define ss          s.size()
#define vs          v.size()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
lld gcd (lld a, lld b) { if (b == 0) return a; else return gcd (b,a % b);}

#define MAX 100000




start{

    caseT{

        int a[5][5], b[5][5], f[5][5];
        
        cin>>a[0][0]>>a[0][1];
        cin>>b[0][0]>>b[0][1];
        cin>>f[0][0]>>f[0][1];

        int ans = 0;
        ans =  abs(a[0][0] - b[0][0]) + abs(a[0][1] - b[0][1]);

        if(a[0][0] == b[0][0] && a[0][0] == f[0][0] && f[0][1] < max(b[0][1], a[0][1]) && f[0][1] > min(b[0][1], a[0][1]) || a[0][1] == b[0][1] && a[0][1] == f[0][1] && f[0][0] < max(b[0][0], a[0][0]) && f[0][0] > min(b[0][0], a[0][0]) ){
            ans += 2;

        }
        cout<<ans<<endl;

           
        
        

    }

  



    finish;
}