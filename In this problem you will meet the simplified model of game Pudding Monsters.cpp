/* Question Description:
In this problem you will meet the simplified model of game Pudding Monsters.
An important process in developing any game is creating levels.
A game field in Pudding Monsters is an nx n rectangular grid, n of its cells contain monsters and some other cells contain game objects.
The gameplay is about moving the monsters around the field. When two monsters are touching each other, they glue together into a single big one (as they are from pudding, remember?).
Statistics showed that the most interesting maps appear if initially each row and each column contains exactly one monster and the rest of map specifics is set up by the correct positioning of the other game objects.
A technique that's widely used to make the development process more efficient is reusing the available resources. For example, if there is a large nx n map, you can choose in it a smaller kx k square part, containing
exactly k monsters and suggest it as a simplified version of the original map. */

//Solution:

#include <bits/stdc++.h>
#define fi first
#define se second
#define lo long long
#define inf 1000000009
#define md 1000000007
#define li 300005
#define mp make_pair
#define pb push_back
using namespace std;
int n,x,y,v[li],a[li],b[li],mn[li],mx[li],g[li];lo ans;
void work(int a[],int b[]){
    int n=a[0],m=b[0],mna=inf,mxa=0,l=1,r=1;
    mn[m+1]=0;
    for(int i=1;i<=m;i++)mn[i]=min(mn[i-1],b[i]),mx[i]=max(mx[i-1],b[i]);
    for(int i=1;i<=n;i++){
        mna=min(mna,a[i]),mxa=max(mxa,a[i]);
        int d=mxa-mna+1-i;
        if(d>0&&d<=m&&mn[d]>mna&&mx[d]<mxa)ans++;
        for(;mn[r]>mna;r++)g[mx[r]-r]++;
        for(;l<r&&mx[l]<mxa;l++)g[mx[l]-l]--;
        ans+=g[mna+i-1];
    }
    for(int i=l;i<r;i++)g[mx[i]-i]=0;
}
void solve(int l,int r){
    if(l==r)return;
    int mid=(l+r)>>1;
    a[0]=mid-l+1,b[0]=r-mid;
    for(int i=l;i<=mid;i++)a[mid+1-i]=v[i];
    for(int i=mid+1;i<=r;i++)b[i-mid]=v[i];
    work(a,b),work(b,a);
    solve(l,mid),solve(mid+1,r);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>x>>y,v[x]=y;
    mn[0]=inf,solve(1,n);
    printf("%lld\n",ans+n);
    return 0;
    cout<<"void work(int *a,int *b) cin>>x>>y;";
}
//NEVER FORGET TO GIVE STAR TO THIS REPO <3
