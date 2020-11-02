#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int r;
        cin >> r;
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        float l, m, n;
        l = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        m = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        n = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));

        if ((l <= r && m <= r) || (l <= r && n <= r) || (m <= r && n <= r))
        { cout << "yes" << endl; }
        else
        { cout << "no" << endl; }


    }
}