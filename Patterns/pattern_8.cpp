#include<bits/stdc++.h>
using namespace std;

void binary_rigt_traingle(int rows)
{

    for(int i=0;i<rows;++i)
    {
        for(int j=0;j<=i;++j)
        {
            if((i+j)%2==0)
               cout<<"1 ";
            else
               cout<<"0 ";
        }
        cout<<endl;
    }
}




int main()
{
  int rows;
  cin>>rows;
  binary_rigt_traingle(rows);
}