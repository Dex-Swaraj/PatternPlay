#include<bits/stdc++.h>
using namespace std;

void v_traingleint(int rows)
{
    for(int i=0;i<rows;++i)
    {
      for(int j=0;j<=i;++j)
      {
        cout<<j+1;
        
          }
          for(int h=1;h<=(2*(rows-i-1));++h)
          {
            cout<<" ";
          }
          for(int k=i;k>=0;k--)
          {
               cout<<k+1;
          }
          cout<<endl;
    }
    
}

int main()
{
  int rows;
  cin>>rows;
  v_traingleint(rows);
}