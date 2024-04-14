#include <iostream>
using namespace std;

int main() {

    int value1, value2, value3;


    cout << "Enter three integer values: ";
    cin >> value1 >> value2 >> value3;


    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);


    cout << "\nContents of variables:\n";
    cout << "Value 1: " << value1 << std::endl;
    cout << "Value 2: " << value2 << std::endl;
    cout << "Value 3: " << value3 << std::endl;

    cout << "\nContents of pointers:\n";
    cout << "Pointer 1: " << *ptr1 << std::endl;
    cout << "Pointer 2: " << *ptr2 << std::endl;
    cout << "Pointer 3: " << *ptr3 << std::endl;


    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}

