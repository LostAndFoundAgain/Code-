#include <bits/stdc++.h> 
using namespace std;

int fact(int x)
{
    if(x==0)
        return 1;
    return (x*fact(x-1));
}
bool ib=ios_base::sync_with_stdio(0);
     bool it=cin.tie(0);
     bool ot=cout.tie(0);

int main() 
{    
    int n;
    cin>>n;
     int m=n;
     for(int row=0;row<n;row++)
     { 
        for(int space =m-1;space>0;space--)
            cout<<' ';
        m--;

        for(int col=0;col<=row;col++)
           {
              int ans=(fact(row)/(fact(row-col)*fact(col)));
              cout<<ans<<' ';
           }

         cout<<'\n';  
      }
    return 0; 
}