#include<iostream>
using namespace std;
namespace abc{
    int z=100;
}
namespace xyz{
    string s="Sindhuja";
}
int main(){
    cout<<xyz::s;
    return 0;
}