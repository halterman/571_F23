#include <vector>

int factorial(int n) {
    static const int LIMIT = 14;
    static std::vector<int> cache(LIMIT, -1);
    if (n < 0 || n >= LIMIT) //  Shed undefined cases 
        return -1;
    else if (n < 2)
        return 1;          //  Base case
    else if (cache[n] != -1)
        return cache[n];   //  Just look up, no work necessary
    else
        return cache[n] = n * factorial(n - 1); 
}

