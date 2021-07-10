#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s = 0;
    int c = 0;
    int head;
    int tail = n % 10;
    while(n >= 10)
    {
        c ++;
        s += n % 10;
        n /= 10;
    }
    head = n;
    c ++;
    s += head;
    cout<<c<<endl<<s<<endl<<head<<" "<<tail;
}
