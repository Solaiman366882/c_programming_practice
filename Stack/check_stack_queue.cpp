#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    stack <int> st;
    queue <int> q;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    cin >> m;
    for(int i=0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    bool flag =  true;
    if(st.size() != q.size())
    {
        flag = false;
    }
    else
    {
        while(!st.empty() && !q.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;

}
