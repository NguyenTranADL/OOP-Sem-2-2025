#include <iostream>

double array_mean(int array[], int n) {
double sum = 0.0;
double average = 0;

if(n < 1) { 
    return sum; 
}
for(int i = 0; i < n; i++) {
     sum += array[i]; 
    }
     average = sum / n;
return average;
}