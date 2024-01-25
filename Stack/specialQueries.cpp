#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    int t;
    cin >> t;
    queue <string> q;
    for(int i=0; i < t; i++)
    {
        int com;
        cin >> com;
        if(com == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if(com == 1)
        {
            if(q.empty()) cout << "Invalid" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }

    }

    return 0;
}

