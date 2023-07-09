#include <vector>
#include <iostream>
using namespace std;
using std::vector;

    string longestCommonPrefix(vector<string>& strs) {
    string Prefix = "";
    if (strs.size() == 1 && strs[0].length() > 0){
        return Prefix = strs[0][0];
    }
    for (int prefixCount = 0; prefixCount < 200; prefixCount++){
        for (int i = 0; i < strs.size()-1;){
            if ((strs[i][prefixCount] == strs[i+1][prefixCount]) && (prefixCount < strs[i].length())){
                i++;
                if (i == strs.size()-1){
                    Prefix += strs[i][prefixCount];
                }
            }
            else{
                return Prefix;
            }
        }
    }
    return Prefix;
}
int main(){
    vector<string> vect{""};
    cout << longestCommonPrefix(vect);

}