#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float breadth;

public:
    // defined inside the class
    void getData()
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }

    float area()
    {
        return length*breadth;
    }

    // only declared here, defined outside the class
    float perimeter();
    void display();
};

// defined outside the class
float Rectangle::perimeter()
{
    return 2*(length+breadth);
}

void Rectangle::display()
{
    cout<<"\nLength    : "<<length<<endl;
    cout<<"Breadth   : "<<breadth<<endl;
    cout<<"Area      : "<<area()<<endl;
    cout<<"Perimeter : "<<perimeter()<<endl;
}

int main()
{
    Rectangle r;
    r.getData();
    r.display();
    return 0;
}
