#include <vector>
#include <iostream>
using namespace std;
using std::vector;

    int removeElement(vector<int>& nums, int val) {
        int k = nums.size();
        for (int i = (nums.size()-1); i >= 0; i--){
            if (nums[i] == val) {
                k--;
                for (int j = i; j < (nums.size()-1); j++){
                    nums[j] = nums[j+1];
                }    
            }            
        }
        return k;
    }
    int main(){
        vector<int> vect{0,1,2,2,3,0,4,2};
        cout << removeElement(vect,2);
    }