/*I want to replace all the variable *i* in this code into *index**/
#include <iostream>
using namespace std;

int main() {
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += i;
        cout << "i = " << i << ", sum = " << sum << endl;
    }

    if (i > 5) {
        cout << "i is greater than 5" << endl;
    }

    return 0;
}
