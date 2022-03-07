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

        string s;
        string str = "abcdefghijklmnopqrstuvwxyz";
        int cnt =0;
        cin>>s;
        int n = s.size();
        int m = n;
        bool b = true;
        
        for(int i =0; i<m; i++){
            //cout<<str[n-1]<<endl;
            if(str[n-1] == s[n-1]){
                s.erase(remove(s.begin(), s.end(), s[n-1]));
                //cout<<s<<endl;

            }
            else if(str[n-1] == s[0]){
                s.erase(remove(s.begin(), s.end(), s[0]));
                //cout<<s<<endl;
            }
            else{
                b = false;
                break;
            }
            n--;
        }
         

        if(b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }

  



    finish;
}