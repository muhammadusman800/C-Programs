#include <iostream>
using namespace std;

int main() {
    int sub1,sub2,sub3;
    cout<<"enter first subject marks: ";
    cin>>sub1;
    cout<<"enter second subject marks: ";
    cin>>sub2;
    cout<<"enter third subject marks: ";
    cin>>sub3;
    float avg = (sub1 + sub2+sub3)/3.0;
    if(avg>80){
    cout<<"You are above standard."<<endl;
    cout<<"Admission granted."<<endl;
    }
    
    return 0;
}