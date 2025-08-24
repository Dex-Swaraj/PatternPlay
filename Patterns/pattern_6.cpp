#include <bits/stdc++.h>
using namespace std;

void inverse_pyramid(int n)
{
    for(int i=n;i>0;i--)
    {
        for(int space=0;space<n-i;space++)
        {
            cout<<" ";
        }
        for(int star=0;star<(i*2)-1;star++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    inverse_pyramid(n);
    return 0;
}