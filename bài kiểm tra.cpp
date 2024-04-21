 phần 1:
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> mssvArray = {"DHV001", "DHV002", "", "DHV004", "DHV005"};

    // In ra mảng MSSV
    std::cout << "MSSV Array:" << std::endl;
    for (const auto& mssv : mssvArray) {
        std::cout << mssv << std::endl;
    }

  Phần 2:
cout << "Nhập mã số sinh viên của bạn: ";
getline(cin, danhsachMSSV[0]);
Phần 3:
for (int i = 0; i < 5; i++) {
    cout << danhsachMSSV[i] << endl;
}
Phần 4 :
    string temp;
for (int i = 0; i < 5 - 1; i++) {
    for (int j = 0; j < 5 - i - 1; j++) {
        if (danhsachMSSV[j].compare(danhsachMSSV[j + 1]) > 0) {
            temp = danhsachMSSV[j];
            danhsachMSSV[j] = danhsachMSSV[j + 1];
            danhsachMSSV[j + 1] = temp;
        }
    }
}

// In mảng đã sắp xếp
for (int i = 0; i < 5; i++) {
    cout << danhsachMSSV[i] << endl;
}
Phần 5:
string * ptrArrayMSSV = danhsachMSSV;
string* maxMSSV = ptrArrayMSSV;
for (int i = 1; i < 5; i++) {
    if (danhsachMSSV[i].compare(*maxMSSV) > 0) {
        maxMSSV = ptrArrayMSSV + i;
    }
}

cout << "Địa chỉ của phần tử chứa MSSV lớn nhất là: " << maxMSSV << endl;
cout << "Giá trị của phần tử đó là: " << *maxMSSV << endl;