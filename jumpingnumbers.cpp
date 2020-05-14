#include<iostream>
using namespace std;


void printjumpingnumbers(int n)
{
	//You don't need to take input
	// Just find the answer and print the output
    for(int i=0;i<=n;i++)
    { int c;
        if(i<=9)
            cout<<i<<' ';
        else
        {int m=i;
            while(m>0)
            {    
                
                 c=m%10;
                 m=m/10;
                  if(((m%10)-c==1)||(c-(m%10)==1))
                      continue;
                else
                    break;
            }
         if(m==0)
             cout<<i<<' ';
        }
    }
	
}

int main()
{
    /* code */
    int n;
    cin>>n;
    printjumpingnumbers(n);
    return 0;
}