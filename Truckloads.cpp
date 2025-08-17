// 	We have a pile of crates at our warehouse that we want to load onto trucks. Our plan is to divide the pile in half forming two smaller piles, then continuing dividing each of the small piles in half until we get piles that will fit on a truck. (Of course, when we divide an odd number of crates in "half", one of the resulting piles will have one more crate than the other.) Our problem is to determine how many trucks we will need to ship the crates.
// Create a class Truckloads that contains a method numTrucks that is given numCrates (the number of crates at the warehouse) and loadSize (the maximum number of crates that will fit in a truck) and that returns the number of trucks required.
 #include<iostream>
 #include<cmath>
 #include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize) {
    if (numCrates <= 0 || loadSize <= 0) {
        return 0; // No crates or load size means no trucks needed
    }
    else if ( numCrates <= loadSize) {
        return 1; // only need 1 truck to fit all the crates
    }
    else {
        int half = numCrates / 2;
        int otherHalf = numCrates - half;
        return numTrucks(half, loadSize) + numTrucks(otherHalf, loadSize);
    }
}

//  int main () {
//         Truckloads truck;
//         std::cout << "Có 10 xác, mỗi xe chở được 4 xác, số xe cần là: " << truck.numTrucks(10,4) << std::endl;
//         std::cout << "Có 257 xác, mỗi xe chở được 7 xác, số xe cần là: " << truck.numTrucks(257,7) << std::endl;

//  }