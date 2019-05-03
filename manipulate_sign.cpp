//
// Created by SheJie on 2019-05-03.
//

#include "include/manipulate_sign.h"
#include <iostream>
#include <iomanip>

using namespace std;

void echo() {
    cout << "---操作符函数格式化输入输出---" << endl;
    const double PI = 3.141592;
    cout << PI << endl
         << setprecision(0) << PI << endl
         << setprecision(1) << PI << endl
         << setprecision(2) << PI << endl
         << setprecision(3) << PI << endl
         << setprecision(7) << PI << endl;
    int number = 100;
    cout << "DES:" << dec << number << endl
         << "HEX:" << hex << number << endl
         << "OCT:" << oct << number << endl;
    cout << number << endl
         << 100 << endl
         << "Input number = ";
    cin >> number;
    cout << number << endl;
    cout << dec << setiosflags(ios_base::showpos) << number << endl
         << "Input number = ";
    cin >> number;
    cout << number << endl;
    cout << resetiosflags(ios_base::showpos);
    cout << number << endl;
}
