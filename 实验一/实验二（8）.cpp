#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, x0, x1, diff;
    
    cout << "请输入一个数a:";
    cin >> a;
    
    if (a < 0) {
        cout << "输入错误！无法计算负数的平方根。" << endl;
        return 0;
    }
    
    x0 = a;
    do {
        x1 = (x0 + a / x0) / 2;
        diff = fabs(x1 - x0);
        x0 = x1;
    } while (diff >= 1e-5);
    
    cout << "平方根的值为：" << x1 << endl;
    
    return 0;
}