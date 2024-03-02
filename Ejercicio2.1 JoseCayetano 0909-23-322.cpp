#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;

    for (int a = 0; a <=50; ++a) {
        if (a % 2==1){
            cout << a << endl;
        }
    }
    for (int b = 0; b <=50; ++b) {
        if (b % 2==0){
            cout << b << endl;
        }
    }

}