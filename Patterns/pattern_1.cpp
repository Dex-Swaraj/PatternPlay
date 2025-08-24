#include<bits/stdc++.h>

using namespace std;


void filled_sqaure(int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
int main()
{   
    int rows;
    int cols;
    cin>>rows>>cols;
    filled_sqaure(rows,cols);
    return 0;
}