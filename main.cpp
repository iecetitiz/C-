//author ece
//date 8th october
//writing c structure

#include <iostream>
#include<stdio.h>
#include<string>
#define MAX 100 // prefer capital letters
#define PI 3.1415 //definition is a way to create a constant variable

using namespace std;
int r=2; //global variable
//void area(); //global function
const int a = 10; //writing a constant and you can not change the 10 during the program

class MyClass
{
public:
    int a;
    void display()
     { std::cout<< "inside class"<<std::endl;
    }
};

void area()
{
    float area;
    area = PI *r *r;
    std::cout << area<<std::endl;
}

int main()
{
    char ch = 'a';
    bool bl = true;
    std::cout << (int)bl<<std::endl;//char'i int'e cast edebiliyorum
    std::cout << (int)a<<std::endl;
    const string ece = "ece"; // i can create a const in main function
    std::cout<<ece<<std::endl;

 MyClass m;
 m.a = 90;
 m.display();
 area();
    std::cout << "Hello world from main function!"<<std::endl;
    std::cout << m.a<<std::endl;
    return 0;
}


