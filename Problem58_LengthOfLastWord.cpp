#include <vector>
#include <iostream>
using namespace std;
using std::vector;


int lengthOfLastWord(string s) {
    int count = 0;
    int i = 1;
    do  {
       if (s[s.size()-i] != ' '){
            count++;
        }
        else if (s[s.size()-i] == ' ' && count != 0){
            return count;
        }
        i++; 
    }
    while (i < (s.size()+1));
    return count;
}

int main(){
        cout << lengthOfLastWord("cute poop    ");
}