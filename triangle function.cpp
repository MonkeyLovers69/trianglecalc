#include <iostream>
#include <math.h>
using namespace std;

class triangle
{
private:
    int side1;
    int side2;
    int side3;
    bool equilateral;
    bool isosceles;
    bool scalene;
public:
void fucktion(){
cout<<endl<<"enter length of 1 side: ";
cin>>side1;
cout<<endl<<"enter length of 2 side: ";
cin>>side2;
cout<<endl<<"enter length of 3 side: ";
cin>>side3;
if (side1 == side2 == side3)
{
    cout<< "that's equilateral triangle.";  
}
else if(side1 == side2 || side1== side3 || side2 == side3|| side2==side1 ){
    cout<<"that triangle is isosceled.";
}
else if(pow(side1)+pow(side2)== pow(side3) || pow(side1) + pow(side3) ==pow(side2)||pow(side3) + pow(side2) == pow(side1)){
    
}

};

int main(){
triangle niggaфы;
nigga.fucktion();
}