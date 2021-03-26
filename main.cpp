#include <iostream>
#include "LCPrimaryString9.h"

int main() {
    LCPrimaryString9 mySolution;
    std::vector<std::string> myStrs = {"ab", "a"};
    std::cout << mySolution.longestCommonPrefix(myStrs);
    return 0;
}
