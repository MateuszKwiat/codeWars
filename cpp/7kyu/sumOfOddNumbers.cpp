long long rowSumOddNumbers(unsigned n) {
    long long sum = 0;
    long long prev = 1;
    for (int i = 1; i < n; i++) {
        prev += (2 * i);
    }

    for (int i = 0; i < n; i++) {
        sum += prev;
        prev += 2;
    }

    return sum;
}