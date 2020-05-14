#include<iostream>
using namespace std;

int pattern(int r,int i)
{
  if(i>r)
    return 0;
        
  pattern(r,i+1);
  cout<<'*'<<"\t";  
}

int row(int n,int r,int i)
{
 //base case 
    if(r>n)
        return 0;

    //recursive case
    pattern(r,i+1);
    cout<<endl;
    row(n,r+1,i);
}
int main()
{   
    int n;
    cin>>n;
    row(n,1,0);
    return 0;
}