#include<iostream>
using namespace std;
extern float arithmetic_ops(float, float, string);

int main(){
    float left;
    float right;
    string op;
    cout << "What is your left #? ";

    cin >> left;
    cout << "What is your right #? ";
    cin >> right;
    cout << "What is your operator> ";
    cin >> op;

    cout << arithmetic_ops(left, right, op) << endl;  
}