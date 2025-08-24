#include<bits/stdc++.h>

using namespace std;


void right_triangle_number(int n)
{
    for (int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}
int main()
{   
    int n;
    cin>>n;
    right_triangle_number(n);
    return 0;
}