#include <bits/stdc++.h>
using namespace std;
#define readfiles freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)
#define clr(x,y) memset(x,y,sizeof(x))
#define pb push_back
#define mp make_pair
#define eps (1e-9)
#define oo (0x7fffffff)
#define OO (0x7fffffffffffffff)
#define PI acos(-1)
#define sqr(x) ((x)*(x))
#define moder (1000000007l)
#define ABS(x) ((x>0)?x:-x)
#define LOG2(x) ((log10(x))/(log10(2)))
#define LOGN(x,n) ((log10(x))/(log10(n)))
#define UNSET(n,x) (n&(~(1 << x)))
#define SET(n,x) (n|(1<<x))
typedef long long int ll;
typedef unsigned long long int ull;
#define MAXN 1005ul

int arr[30005] = {0};
int cnt[1000005] = {0};
int resq[200005] = {0};
int res = 0;
int blockSz;

bool comp(const pair<pair<int, int>, int>& at, const pair<pair<int, int>, int>& bt) {
    pair<int, int> a = at.first;
    pair<int, int> b = bt.first;
    
    if ((a.first / blockSz)!=(b.first / blockSz))
        return (a.first / blockSz)<(b.first / blockSz);
    return a.second<b.second;
}

void add(int idx) {
    if (!cnt[arr[idx]])
        res++;
    cnt[arr[idx]]++;
}

void sub(int idx) {
    cnt[arr[idx]]--;
    if (!cnt[arr[idx]])
        res--;
}

void solve() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int q;
    scanf("%d", &q);
    vector< pair<pair<int, int>, int> > qu(q);
    for (int i = 0; i < q; i++) {
        scanf("%d %d", &qu[i].first.first, &qu[i].first.second);
        qu[i].second = i;
        qu[i].first.first--, qu[i].first.second--;
    }
    
    blockSz = ((int) ceil((sqrt(n))));
    sort(qu.begin(), qu.end(), comp);
    
    int curl = qu[0].first.first, curr = qu[0].first.second;
    for (int i = curl; i <= curr; i++) 
        add(i);
    resq[qu[0].second] = res;
    
    for (int i = 1; i < qu.size(); i++) {
        int l = qu[i].first.first;
        int r = qu[i].first.second;
        //remove L
        while (curl < l)
            sub(curl), curl++;
        //add L
        while (curl > l)
            curl--, add(curl);
        //add R
        while (curr < r)
            curr++, add(curr);
        //remove R
        while (curr > r)
            sub(curr), curr--;

        resq[qu[i].second] = res;
    }
    for (int i = 0; i < q; i++)
        printf("%d\n", resq[i]);
}

int main() {
#ifndef ONLINE_JUDGE
  ////  readfiles;
   /// double begin = clock();
#endif
    solve();
    return 0;
#ifndef ONLINE_JUDGE
  //  printf("%.4f", (clock() - begin) / CLOCKS_PER_SEC);
#endif
}