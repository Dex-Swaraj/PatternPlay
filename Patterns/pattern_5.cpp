// #include<bits/stdc++.h>

// using namespace std;


// void pyramid(int n)
// {
//     int var=0;
//     for(int i=n;i>0;i--)
//     {
        
//         for(int j=i;j>0;j--)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<(var*2)+1;j++)
//         {
//             cout<<"*";
//             if(var==n)
//             {
//                 break;
//             }
//         }
//         var++;
//         cout<<endl;
//     }

// }
// int main()
// {   
//     int n;
//     cin>>n;
//     pyramid(n);
//     return 0;
// }



//optimal

#include <bits/stdc++.h>
using namespace std;

void pyramid(int n) {
    for (int i = 0; i < n; i++) {
        // spaces
        for (int s = 0; s < n - i; s++)
            cout << ' ';
        // stars
        for (int star = 0; star < 2 * i + 1; star++)
            cout << '*';
        cout << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    pyramid(n);
    return 0;
}
