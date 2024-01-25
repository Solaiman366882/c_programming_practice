#include <bits/stdc++.h>

using namespace std;



int main()
{
    int q;
    int n;
    cin >> n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    cin >> q;
    for(int i=0; i < q; i++)
    {
        int c;
        cin >> c;
        if(c == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else if(c == 1)
        {
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else if(c == 2)
        {
            if(!pq.empty())pq.pop();
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
    }

    return 0;
}

