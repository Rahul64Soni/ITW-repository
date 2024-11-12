#include<iostream>
#include<sstream>
#include<string>

using namespace std;

int main (){

    string s="roger was here ";
    int num =123;

    stringstream ss;
    ss<< "name is :"+ s+"with the number" << num;
    string info=ss.str();
    cout<< info<<endl;


    return 0;
}