class Solution {
public:
    int longestMountain(vector<int>& arr) {
        // int longestMountain = 0;
        // int currentBase = 0;
        // bool peakReached = false;

        // if (arr.size() < 3) return longestMountain;

        // for (int i = 1; i < arr.size() - 1; i++){
        //     if ((arr[i+1] > arr[i]) && peakReached){
        //         peakReached = false;
        //         if ((i - currentBase) > longestMountain){
        //             longestMountain = i + 1 - currentBase;
        //         }
        //         currentBase = i;
        //     }
        //     else if ((arr[i+1] < arr[i]) && !peakReached) {
        //         if (currentBase == 0){
        //             currentBase = i+1;
        //         }
        //         else{
        //             peakReached = true;
        //         }
                
        //     }
        // }

        // if (peakReached && ((arr.size() - currentBase) > longestMountain)) {
        //     longestMountain = arr.size() - currentBase;
        // }

        // return longestMountain;
        
        int longestMountain = 0;
        int currentTrough = 0;
        bool peakFound = false;

        if (arr.size() < 3){
            return longestMountain;
        }

        for (int i = 1; i < arr.size() - 1; i++){

            if ((arr[i-1] >= arr[i]) && (arr[i+1] >= arr[i])){
                if (peakFound && (i - currentTrough + 1 > longestMountain)){
                    longestMountain = i - currentTrough + 1;
                }
                peakFound = false;
                currentTrough = i;
            }
            else if ((arr[i-1] < arr[i]) && (arr[i+1] < arr[i])){
                peakFound = true;
            }

        }

        if ((arr[arr.size()-2] > arr[arr.size()-1])){
            if (peakFound && (arr.size() - currentTrough > longestMountain)){
                longestMountain = arr.size() - currentTrough;
            }
        }

        return longestMountain;
    }
};