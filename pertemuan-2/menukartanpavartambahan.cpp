#include <iostream>

using namespace std;

int main() {
    int firstvalue,secondvalue;

    firstvalue = 15;
    secondvalue = 10;

    firstvalue = firstvalue + secondvalue;
    secondvalue = firstvalue - secondvalue;
    firstvalue = firstvalue - secondvalue;

    cout << firstvalue << endl;
    cout << secondvalue << endl;

    return 0;
}