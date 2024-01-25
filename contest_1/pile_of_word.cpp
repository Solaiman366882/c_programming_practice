#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int arr1[26] = {0};
        int arr2[26] = {0};
        for(int i=0; i < s1.size();i++)
        {
            int cnt = s1[i] - 'a';
            arr1[cnt]++;
        }
        for(int i=0;i < s2.size();i++)
        {
            int cnt = s2[i] - 'a';
            arr2[cnt]++;
        }
        bool flag = true;
        for(int i=0; i < 26; i++)
        {
            if(arr1[i] != arr2[i])
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
