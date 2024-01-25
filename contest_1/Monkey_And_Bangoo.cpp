#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int t;
    cin >> t;
    for(int i=0; i < t; i++)
    {
        int h,a,b;
        cin >> h >> a >> b;
        int progress = 0;
        int time = 0;
        while(h != progress)
        {
            progress = progress + a;
            time+=2;
        }
        if(h < a)
        {
            int finalTime = a/h;
            cout << finalTime << endl;
        }
        else if(a < b)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            //int finalTime = h/progress;
            cout << time << endl;
        }
    }

    return 0;
}

