long long int find_factorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    }
    if (a < 0) {
        return -1;
    }
    return a * find_factorial(a - 1);
}