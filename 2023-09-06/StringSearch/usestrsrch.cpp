#include "stringsearch.h"

int main() {
    std::string text = "Hello";
    std::string result;

    // Use version 1
    result = find_string1(text, true, false); 

    // Use version 2
    result = find_string2(text, FORWARD, CASE_INSENSITIVE); 
}

