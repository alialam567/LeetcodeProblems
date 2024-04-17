#include <vector>
#include <iostream>
using namespace std;
using std::vector;

uint32_t reverseBits(uint32_t n) {
    uint32_t newnum = 0;
    int num_bits = sizeof(n) * 8;
    for (int i = 0; i < num_bits; i++){
        newnum = (newnum | (((n >> (num_bits-1-i)) & 1) << i));
    }
    return newnum;
}

int main(){
    uint32_t num = 2147483649;
    cout << reverseBits(num);
}