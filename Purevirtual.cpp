#include<iostream>
using namespace std;
//if a function doesnt have any use in the base class but the function must implemented by this derived classes
// pure virtual function
class A
{
virtual void display()=0;


};
class B :: public A{
void display()
{
}
};
int main()
{
    B b1;


}
