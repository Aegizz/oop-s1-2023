#include <iostream>
using namespace std;
extern int binary_to_int(int[], int);

int main() {
    int bin[30] = {0,0,0,1,1};
    cout << binary_to_int(bin, 5);


}