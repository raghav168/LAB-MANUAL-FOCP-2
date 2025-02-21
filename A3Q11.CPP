#include <iostream>
using namespace std;
class Greeter 
{
public:
    void greet() 
    {
        cout << "Hello!" << endl;
    }

    void greet(string name) 
    {
        cout << "Hello, "<<name<<"!"<<endl;
    }

    void greet(string name, int age) 
    {
        cout<<"Hello, "<<name<<"! You are "<<age<<" years old."<< endl;
    }
};
int main() 
{
    Greeter greeter;
    greeter.greet();               
    greeter.greet("Raghav");        
    greeter.greet("Raghav", 19);      
    return 0;
}