#include <iostream>
#include<unordered_set>
using namespace std;
int main() {
    unordered_set<int>set1={5,3,9,7,1}; // random number 
    set1.insert(20);
    for(int i :set1)
    cout <<  i<<endl;
    return 0;
}
