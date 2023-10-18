#include <iostream>

using namespace std;

int main () {
    int firstvalue,secondvalue,thirdvalue;

    firstvalue = 15;
    secondvalue = 10;

    thirdvalue = firstvalue;
    firstvalue = secondvalue;
    secondvalue = thirdvalue;

    cout << firstvalue << endl;
    cout << secondvalue << endl;

return 0;
}