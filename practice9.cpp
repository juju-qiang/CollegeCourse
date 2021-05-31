#include <iostream>
#include <math.h>
#define PI 3.14

using namespace std;

class Shape{
public:
    void Area(float wide,float length){
        cout<<"面积："<<wide*length;
    }
    void Area(float line1,float line2,float line3){
        double RoundLength=(line1+line2+line3)/2;
        cout<<"面积："<<sqrt(RoundLength*(RoundLength-line1)*(RoundLength-line2)*(RoundLength-line3));
    }
    void Area(float radius){
        cout<<"面积："<<PI*radius*radius;
    }
    void RoundLength(float wide, float length)
    {
        cout << "周长：" << ( wide + length )*2<<endl;
    }
    void RoundLength(float line1, float line2, float line3)
    {
        double RoundLength1 = line1 + line2 + line3;
        cout << "周长：" << RoundLength1<<endl;
    }
    void RoundLength(float radius)
    {
        cout << "周长：" << PI * radius * 2<<endl;
    }
};

class Rectangle:public Shape{

};

class Triagle:public Shape{

};

class Circle:public Shape{

};

int main(){
    string test;
    cin>>test;
    if(test=="圆形"){
        Circle  TestCircle;
        int Radius;
        cin>>Radius;
        TestCircle.RoundLength(Radius);
        TestCircle.Area(Radius);
    }    
    if(test=="矩形"){
        Rectangle TestRecangle;
        int wide,length;
        cin>>wide>>length;
        TestRecangle.RoundLength(wide,length);
        TestRecangle.Area(wide,length);
         
    }
    if(test=="三角形"){
        Triagle TestTriagle;
        int line1,line2,line3;
        cin>>line1>>line2>>line3;
        TestTriagle.RoundLength(line1,line2,line3);
        TestTriagle.Area(line1, line2, line3);
    }
    return 0;
}