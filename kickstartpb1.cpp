#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int T,N,B,A[1000],count=0,j=1;
  int sum=0;
  cin>>T;
  while(j<=T)
  {  sum=0;
     count=0; 
    cin>>N>>B;
      for(int i=0;i<N;i++)
      cin>>A[i];

  sort(A,A+N);
  for(int i=0;i<N;i++)
  {    if(i==0)
    sum=0;
       sum=sum+A[i];
      if(sum>B)
      break;
      count++;
      
  }

  cout<<"Case #"<<j<<": "<<count<<' '<<endl;
  ++j;
}
  
}