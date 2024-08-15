#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
cout<<"Enter number of rows:";
cin>>n;
for(i=0;i<=n;i++)
{
    for(j=0;j<=i;j++)
    {
        cout<<"*";
    }

        m=2*(n-i);
        for(j=0;j<=m;j++){
        cout<<" ";    
        }
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
}
         for(i=n;i>=0;i--)
         {
            for(j=0;j<=i;j++)
            {
                cout<<"*";
            }
            m=2*(n-i);
            for(j=0;j<=m;j++){
                cout<<" ";
            }
            for(j=0;j<=i;j++){
                cout<<"*";
            }
            cout<<"\n";
         }
   return 0;
    }
