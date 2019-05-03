#include "include/generic_array.h"
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

const int LENGTH = 4;

void generic_array() {
    cout << "---泛型算法应用于数组---\n";
    double a[] = {1.1, 4.4, 3.3, 2.2}, b[4];
    copy(a, a + LENGTH, ostream_iterator<double>(cout, " "));
    cout << endl;
    reverse_copy(a, a + LENGTH, ostream_iterator<double>(cout, " "));
    cout << endl;
    copy(a, a + LENGTH, b);
    copy(b, b + LENGTH, ostream_iterator<double>(cout, " "));
    cout << endl;
    sort_asc(a, b);
    sort_desc(a);
    search(a, 1.1);
    search(a, 5.5);
}

void sort_asc(double a[], double b[]) {
    cout << "升幂排序\n";
    sort(a, a + LENGTH);
    copy(a, a + LENGTH, ostream_iterator<double>(cout, " "));
    cout << endl;
    reverse_copy(a, a + LENGTH, b);
    copy(b, b + LENGTH, ostream_iterator<double>(cout, " "));
    cout << endl;
}

void sort_desc(double a[]) {
    cout << "降幂排序\n";
    sort(a, a + LENGTH, greater<double>());
    copy(a, a + LENGTH, ostream_iterator<double>(cout, " "));
    cout << endl;
}

bool search(double subject[], double needle) {
    cout << "搜索值:" << needle << "\n";
    double *point = find(subject, subject + LENGTH, needle);
    if (point == subject + LENGTH) {
        cout << "没有值为" << needle << "的数组元素\n";
        return false;
    } else {
        cout << "有值为" << *point << "的数组元素\n";
        return true;
    }
}

