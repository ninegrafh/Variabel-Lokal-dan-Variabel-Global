#include <iostream>
#include <cstdlib>
using namespace std;
int c;
int a=10;
int perkalian(int b){
    c = a * b;
    return c;
}

int main(){
    int d = perkalian(5);
    cout<<"a = "<< a <<endl;
    cout<<"a * d = "<< d <<endl;
    return 0;
}
