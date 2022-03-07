#include<bits/stdc++.h>
using namespace std;

//redjerrk

#define pf printf
#define sf(num)   scanf("%d",&num)
#define sff(num1,num2)  scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lli",&num)
#define sll(num1,num2) scanf("%lli %lli",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lli %lli %lli",&num1,&num2,&num3)
#define mem(ara,n)  memset(ara,n,sizeof(ara))
#define memb(ara)   memset(ara,false,sizeof(ara))
#define watch(x)    cout << (#x) << " is " << (x) << endl
#define rloop       for(int i=n; i>0; i--)
#define ifor(x,n)   for(int i =int(x); i<=int(n); i++)
#define llu         unsigned long long
#define lld         long long
#define gets        getline (cin,s)
#define U           unsigned int
#define pb          push_back
#define mp          make_pair
#define pob         pop_back
#define space       printf(" ")
#define line        cout<<"endl"
#define start       int main()
#define caseT       int T,cs; cin>>T; for(cs = 1; cs<=T; cs++)
#define finish      return 0
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define yes         printf("YES")
#define no          printf("NO")
#define ss          s.size()
#define vs          v.size()
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
lld gcd (lld a, lld b) { if (b == 0) return a; else return gcd (b,a % b);}

#define MAX 100000




start{

    caseT{
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];

        }

        int c1,c2,chk1, chk2,c3,c4, ans;
        bool b1 = false, b2 = false, b3 = false, b4 = false;
        chk1 = a[0];
        chk2 = a[0];
        for(int i=0; i<n; i++){
            if(chk1 < a[i])chk1 = a[i];
            if(chk2 > a[i])chk2 = a[i];
        }

        for(int i=0; i<n; i++){
            if(chk1 == a[i])c1= i+1;
            if(chk2 == a[i])c2 = i+1;
        }

        int x=1e6, y=1e6, z=1e6,g = 1e6,h=1e6;
        x = max(c1, c2);
        y = max(n-c1, n-c2)+1;
        if(c1>n/2){
            g = n-c1+1;
            h = c2;
        }
        if(c2>n/2){
            h = n-c2+1;
            g = c1;
        }
        z = g+h;
        cout<<min(min(x,y),z)<<endl;

    }


    finish;
}