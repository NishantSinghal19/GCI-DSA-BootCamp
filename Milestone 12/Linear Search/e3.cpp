#include<iostream> #include<math.h> using namespace std;
class Area
    private:
        float Length, Breadth, Height, Radius, Answer, Base;

    public :
        void AreaofShapes(float Base, float Height) Answer = 0.5*Base*Height;
        cout<<"Area of Triangle is : "<<Answer<<end1;

        void AreaofShapes(float Radius) Answer = 3.14*pow(Radius,2);
        cout<<"Area of circle is : "<<Answer<<endl;

        void AreaofRectangle(float Length, float Breadth) Answer = Length*Breadth;
        cout<<"Area of Rectangle is : "<<Answer<<end1;


int main() Area A;
A.AreaofShapes(5, 6.5); cout<<endl; A.AreaofShapes(5.5); cout<<endl; A.AreaofRectangle(5.5, 6.5);
 
return 0;


