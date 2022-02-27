#include <bits/stdc++.h>
using namespace std;




int main()
{
    
    int n,k;
    cin >> n >> k;
    string str;
    cin>>str;
    
    sort(str.begin(), str.end());
    cout << str[0] << " ";
    for(int i = 1; i<n; i++){
        cout << str[i];
    }




    return 0;
}