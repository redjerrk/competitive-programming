#include<bits/stdc++.h>
using namespace std;

//redjerrk

#define    pf printf
#define sf(num)   scanf("%d",&num)
#define sff(num1,num2)  scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lli",&num)
#define sll(num1,num2) scanf("%lli %lli",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lli %lli %lli",&num1,&num2,&num3)
#define loop1(i,n) for(i=1;i<=n;i++)
#define loop(i,n) for(i=0;i<n;i++)
#define loops(i,a,n) for(i=a;i<=n;i++)
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
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
#define line        printf("\n")
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


    int n, m;
    cin>>n>>m;
    string a[n], s[n];
    cin.ignore();
    for(int i=0; i<n; i++){
        cin>>a[i];
        s[i] = a[i];
    }
    for(int i=0; i<n; i++){
        reverse(s[i].begin(), s[i].end());
    }
    int cnt =0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i] == a[j]){
                cnt++;
                break;
            }
        }
    }

    for(int i=0; i<n;i++){
        cout<<s[i]<<endl;
    }
    line;
    cout<<cnt<<endl;
    string c[cnt];
    int c1= 0, c2 = cnt;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(s[i] == a[j]){
                c[c1] = a[i], c[c2] = s[i];
                c1++, c2--;
                break;
            }
        }
    }





    finish;
}
