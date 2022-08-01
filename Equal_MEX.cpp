#include <bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2*n];
         for(int i=0; i<2*n; i++){
             cin>>arr[i];
         }
       unordered_map<int, int> m;

        for (int i = 0; i < 2 * n; i++)
        {
            m[arr[i]]++;
        }

        bool f = true;

        for (int i = 0; i < 2 * n; i++)
        {
            if (m[i] == 1)
            {
                f = false;
                break;
            }
            else if (m[i] == 0)
                break;
        }

        if (f)
            cout << "YES";
        else
            cout << "NO";
        cout <<endl;
    }

    return 0;
}
