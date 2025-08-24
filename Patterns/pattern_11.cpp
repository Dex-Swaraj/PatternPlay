#include<bits/stdc++.h>
using namespace std;

void charcter_loop(int rows)
{
    for(int i=0;i<rows;++i)
    {
        for(char j='A';j<='A'+i;++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
   charcter_loop(t);
}