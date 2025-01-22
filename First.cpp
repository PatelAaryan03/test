#include<iostream>

using namespace std;

int main(){
    string name ;
    int age;
    cout << "What's your name? \n";
    getline(cin  , name);
    cout << "What's yours age? \n";
    cin >> age ;
    cout << "Hello "  << name << "\n";
    cout << "You are " << age <<  " years old." << "\n";

}