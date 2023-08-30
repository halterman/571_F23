
int factorial(int n) {
    if (n < 2)
        return 1;          //  Base case 
    else
        return n * factorial(n - 1); //  Compute the factorial
}

