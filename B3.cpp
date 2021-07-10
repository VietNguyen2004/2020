#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int k = n;
   if (n < 1) return 0;
   bool prime[n + 1];
   for(int i =2;i <= n; i ++) prime[i] = 1;
   for(int i =2; i*i <= n; i ++)
   {
       for(int j = i * i ; j <= n;j += i)
       {
           prime[j] = 0;
       }
   }
   while(k > 0)
   {
       if(prime[k] || n % k ==0) {
            cout<<k<<" ";
       }
       k --;
   }
   return 0;
}
