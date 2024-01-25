#include<bits/stdc++.h>
using namespace std;
class myStack
{
private:
    vector <int> v;
public:
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(size() == 0) return true;
        else return false;
    }

};

int main()
{
    myStack st;
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
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}
