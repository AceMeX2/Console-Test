#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){
    
    cout << "Hello" << endl;
    
    cout << "What's Your Name?" << endl;
    
    string name;
    
    cin >> name;
    
    cout << "Hi " << name << " my name is CPP-Bot" << endl;
    
    cout << "How old are you?" << endl;
    
    int age;
    
    cin >> age;
    
    cout << "Your " << age << " well I'm not even one as I was created in 2017." << endl;
    
    if (age > 17)
    {
        cout << "Adult Mode Activated. Hello Big Boy and or Girl." << endl;
        
        cout << "Whoops you weren't meant to see that." << endl;
    }
    
    else {
        cout << "Child Mode Activated." << endl;
        
        cout << "Whoops another glitch." << endl;
    }
    
    return 0;
    
} 