#include<iostream>
using namespace std;
int a[10001];
int b[10001];
int res = INT_MIN;
int n;
int c;
void quickSort(int l , int r)
{
    int i = l ;
    int j = r ;
    int m = (l + r) / 2;
    while(i < j)
    {
        while(a[i] < a[m]) i ++;
        while(a[j] > a[m]) j --;
        if(i <= j)
            swap(a[i++], a[j--]);
    }

    if(i < r) quickSort(i,r);
    if(j > l) quickSort(l,j);
}
void ghinhan()
{
    int k[10001];
    int id = 1;
    int r = INT_MAX;
    for(int i = 1 ; i <= n; i ++)
    {
        if(b[i]) k[id ++] = a[i];
    }
    for(int i = 2;i <= c ; i++)
    {
        r = min(r, k[i] - k [i-1]);
    }
    res = max(res,r);
}
void backtrack(int k)
{
    for(int i = 1; i <= n; i++)
    {
        if(!b[i])
        {
            b[i] = 1;
            if(k == c) {
                ghinhan();
            }
            else {
                backtrack(k + 1);
            }
            b[i] = 0;
        }
    }
}
int main()
{
    cin>>n>>c;
    for(int i =1;i <= n; i ++) cin>>a[i];
    quickSort(1,n);
    backtrack(1);
    cout<<res;
}
