#include <bits/stdc++.h>

using namespace std;


int main()
{
    // Write your code here
    int n,m;
    cin >> n >> m;
    stack <int> s;
    queue <int> q;
    bool flag = true;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }
    for(int i=0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    if(s.size() != q.size()) flag = false;
    else
    {
        while(!s.empty() && !q.empty())
        {
            if(s.top() != q.front())
            {
                flag = false;
                break;
            }
            //cout << s.top() << " = " << q.front() << endl;
            s.pop();
            q.pop();
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}

