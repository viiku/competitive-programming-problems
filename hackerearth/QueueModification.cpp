
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define endl "\n"
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define per(i,n,a) for(ll i=n;i>a;i--)
#define rep1(i,a,n) for(ll i=a;i<=n;i++)
#define forit(it,x) for(auto it=(x).begin();it!=(x).end();++it)
#define all(x) (x).begin(),(x).end()
#define ull unsigned long long int
#define ld long double
#define prec(n) fixed<<setprecision(n)
#define test ll t; cin>>t; while(t--)
#define re return 0
#define pb push_back
#define pi 3.1415926535897932384626
#define fi first
#define se second
#define eb emplace_back
#define vll vector<ll>
#define vi  vector<int>
#define mpll map<ll,ll>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
const ll mod=(ll)1e9+7;
int n, m;
deque < pair <int, int> > d;
int a[MAXN];

void enqueue(int x) {
    int num = 1;
    while (!d.empty() && d.back().first > x) {
        num += d.back().second;
        d.pop_back();
    }
    d.push_back(make_pair(x, num));
}

void dequeue() {
    if (d.front().second == 1) {
        d.pop_front();
    }
    else {
        d.front().second--;
    }
}

int getMin() {
    return d.front().first;
}

int main() {
    //assert(freopen("input.txt","r",stdin));
    //assert(freopen("output.txt","w",stdout));

    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= m; i++) {
        enqueue(a[i]);  
    }

    printf("%d\n", getMin());

    for (int i = m + 1; i <= n; i++) {
        dequeue();
        enqueue(a[i]);
        printf("%d\n", getMin());
    }

    return 0;
}
