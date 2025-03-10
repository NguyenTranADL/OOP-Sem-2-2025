#include <iostream>

using namespace std;

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;  
    double weighted_avg = 0.0;
    for (int i = 0; i < n; i++) {
        int count = 1;  
        for (int j = i + 1; j < n; j++) {
            if (array[i] == array[j]) {
                count++;  
                array[j] = -1;  
            }
        }
        if (array[i] != -1) {  
            weighted_avg += (array[i] * count) / (double)n;
        }
    }

    return weighted_avg;
}

