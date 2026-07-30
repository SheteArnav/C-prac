#include<iostream>
using namespace std;
int x=20; //Global variable

int main()

{
    int y=40; //garbage value
    cout<<y<<endl;
    cout<<x<<endl;
    return 0;
}