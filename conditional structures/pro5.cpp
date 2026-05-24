#include <iostream>
using namespace std;

int main() {
    int a ,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    int max;
    max = a;
    if(b>max)
    max = b;
    if(c>max)
    max = c;
    cout<<"Maximum of three numbers is: "<<max<<endl;
    
    return 0;
}