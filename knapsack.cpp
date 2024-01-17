#include <iostream>
using namespace std;

void swap(float *x, float *y) {
    float t = *x;
    *x = *y;
    *y = t;
}

void sort(float w[5], float p[5], float a[5]) {
    int i, j;
    for (i = 0; i < 5; i += 1) {
        for (j = 1; j < 5; j += 1) {
            if (a[j] < a[j - 1]) {
                swap(&w[j], &w[j - 1]);
                swap(&p[j], &p[j - 1]);
                swap(&a[j], &a[j - 1]);
            }
        }
    }
}

float knapsack(float p[5], float w[5], int cap, int n) {
    float total = 0;
    float taken = 0;
    int i = 0;
    while (i < cap) {
        if (cap < taken)
            break;
        total = total + p[i];
        taken = taken + w[i];
        i++;
    }

    int left = cap - taken;
    total = total + p[i] * (left / w[i]);
    return total;
}

int main() {
    int cap = 8, n = 5;
    float w[5] = {3, 2, 1, 2, 2};
    float p[5] = {45, 60, 33, 68, 90};
    
    int i;
    float a[5];
    for (i = 0; i < 5; i++) {
        a[i] = p[i] / w[i];
    }

    sort(w, p, a);
    cout << knapsack(w, p, cap, n) << endl;

    return 0;
}