#include <iostream>

void print_pass_fail(char grade){
    //Basic Swtich statement with all valid entries and outputs
    switch (grade) {
        case 'A':
            std::cout << "Pass" << std::endl;
            break;
        case 'B':
            std::cout << "Pass" << std::endl;
            break;
        case 'C':
            std::cout << "Pass" << std::endl;
            break;
        case 'D':
            std::cout << "Fail" << std::endl;
            break;
        case 'E':
            std::cout << "Fail" << std::endl;
            break;
        //If output does not match list print "nothing"
        default:
            std::cout << "Nothing" << std::endl;
    }
}