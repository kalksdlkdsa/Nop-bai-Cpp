#include <iostream>
using namespace std;
int main() {
    int x = cin << "Nhập số nguyên bạn muốn chuyển đổi: ";
    if (x > 0) {
        cout << "Số " << x << "là số nguyên lớn hơn 0";
    }
    else if (x == 0) {
        cout << "Số " << x << "là số 0";
    }
    else {
        cout << "Số " << x << "là số nguyên bé hơn 0";
    }    
}