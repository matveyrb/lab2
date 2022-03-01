using namespace std;
#include <iostream>
#include <iomanip>

int main()
{
    double s,k,count,x, e;
    cout << "Enter x: \n";
    cin >> x;
    cout << "Enter e: \n";
    cin >> e;
    count = 1;
    s = 1 / pow(x, count);
    k = s;
    while (abs(s - (s - k) > e))
    {
        count++;
        k = 1 / pow(x, count);
        s += k;
    } 
    while (abs(s - (s - k) > e));
    cout << "S(N): " << s << " N: " << count;
}

