
#include <iostream>
using namespace std;
extern float add_op(float, float);
extern float subtract_op(float, float);
extern float multiply_op(float, float);

extern float arithmetic_ops(float, float, float (*)(float, float));
extern float multiply_ops(float, float);
int main(){
    float left;
    float right;
    string op;
    cout << "What is your left #? ";

    cin >> left;
    cout << "What is your right #? ";
    cin >> right;

    cout << arithmetic_ops(left, right, add_op) << endl;  
}