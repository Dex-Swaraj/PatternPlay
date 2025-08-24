#include <bits/stdc++.h>
using namespace std;

void character_loop(int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        for (char j = 'A'; j <= 'A' + i; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    character_loop(t);
    return 0;
}
