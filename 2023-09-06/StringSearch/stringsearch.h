#include <string>

// Version 1 ---------------------------------------
std::string find_string1(const std::string& text, 
                         bool search_forward, 
                         bool case_sensitive);


// Version 1 ---------------------------------------
enum SearchDirection {
    FORWARD, BACKWARD
};

enum CaseSensitivity {
    CASE_SENSITIVE,
    CASE_INSENSITIVE
};

std::string find_string2(const std::string& text,
                         SearchDirection direction,
                         CaseSensitivity case_sensitivity);

// Stub Implementations ------------------------------
std::string find_string1(const std::string& text, 
                         bool search_forward, 
                         bool case_sensitive) {
    (void)text;
    (void)search_forward;
    (void)case_sensitive;
    return "Version 1";
}

std::string find_string2(const std::string& text,
                         SearchDirection direction,
                         CaseSensitivity case_sensitivity) {
    (void)text;
    (void)direction;
    (void)case_sensitivity;
    return "Version 2";
}
