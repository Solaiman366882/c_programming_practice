#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    stack <int> newS;
    int n;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    while(!st.empty())
    {
        newS.push(st.top());
        st.pop();
    }
    while(!newS.empty())
    {
        cout << newS.top() << " ";
        newS.pop();
    }
    return 0;
}
