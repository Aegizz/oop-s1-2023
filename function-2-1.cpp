#include<iostream>

float add_op(float left, float right){
    return left +right;

}
float subtract_op(float left, float right){
    return left - right;
}
float arithmetic_ops(float left, float right, std::string op){
    if (op == "+"){
        return add_op(left, right);
    } else {
        return subtract_op(left, right);
    }

}