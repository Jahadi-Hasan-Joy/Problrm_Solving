#include <bits/stdc++.h>
using namespace std;
#define ll long long

class student
{
public:
    int roll,age;
    int arr[100];
    student(int roll)
    {
        this->roll = roll;
    }
    void display()
    {
        cout << "Roll: " << roll << endl;
    }
    void fun(student *obj)
    {
        obj->roll = 100;
    }
};

int main()
{
    //! static memory allocation
    student obj1(5);
    cout << obj1.roll << endl;

    //! dynamically allocate memory for a student object
    student *obj = new student(10);
    cout << obj->roll << endl;
    obj->display();
    obj->fun(obj);
    obj->display();
    cout<< "Size of student class: ";   
    cout<<sizeof(student)<<endl;    
    cout<<sizeof(obj1)<<endl;
    delete obj; // free the memory allocated to obj
    return 0;
}