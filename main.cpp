#include <iostream>
using namespace std;
int main() {
    int x ; cout << "Nhập số nguyên bạn muốn chuyển đổi: ";
    cin << x;
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
