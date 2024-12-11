#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int flag = 1;
    while(flag){
        cin >> n;
        if(n == 0) flag = 0; 
        int term = (n * (n - 1)) / 2 + 1;
        cout << term << endl;
    }
    return 0;
}