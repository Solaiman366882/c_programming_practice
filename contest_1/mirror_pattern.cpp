#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n;
    cin >> n;
    int l = n;
    int first = 1;
    int last = n;
    for(int i=0; i <n; i++ )
    {
        cout << i+1;
    }
    cout << endl;
    for(int i=0; i < n-2; i++)
    {
        for(int j=0; j < n; j++)
        {
            if(j == 0)
            {
                first++;
                cout << first;
            }
            else if(j == n-1)
            {
                last--;
                cout << last;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    if(n > 1)
    {
        for(int i=0; i <n; i++ )
        {
            cout << l;
            l--;
        }
    }
    return 0;
}
