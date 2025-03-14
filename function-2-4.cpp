#include <iostream>
using namespace std;

int array_min(int integers[], int length) {
    if ( length <= 0) return -1;
    int minVal = integers[0];
    for ( int i = 1; i < length; i++){
        if ( integers[i] < minVal){
            minVal = integers[i];
        }
    }
    return minVal;
}

int array_max(int integers[], int length) {
    if ( length <= 0) return -1;
    int maxVal = integers[0];
    for ( int i = 1; i < length; i++){
        if ( integers[i] > maxVal){
            maxVal = integers[i];
        }
    }
    return maxVal;
}

int sum_min_max(int integers[], int length) {
    if ( length <= 0) return -1;
    return array_max(integers,length) + array_min(integers,length);
}