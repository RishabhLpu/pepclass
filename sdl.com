//sets properties-> 1. unique element(no duplucacy)
// immutable-> we can add or remove elements but we can not change the values of existing elements
//by default the oder will be sorted
#include <iostream>
#include <set>
using namespace std;
int main(){
set<int> set1={1,2,3,5,8};//<int,greater<int> for decending
set1.insert(20);//insert the element
set1.erase(2);

for(int i:set1)
{
    cout<<i<<" ";
}
}
