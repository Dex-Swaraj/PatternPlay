#include<bits/stdc++.h>

using namespace std;

void half_diamond(int rows)
{
    for(int i=1;i<=2*rows-1;++i)
    {
        int stars=i;
        if(i>rows)
           {stars=2*rows-i;}
        for(int j=1;j<=stars;++j)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    half_diamond(rows);
    return 0;
}