#include<iostream>
#include<string>
#include<vector>

using namespace std;
// fn overloading 

// int add(int a, int b){
//     return a + b;
// }
// double add(double a, double b){
//     return  a+b;
// }

// operator overloading 

class Vector{

     int x,  y;
    public:

    // Vector(int x, int y){
    //     this->x =x;
    //     this->y =y;
    // }

    // init list 
    Vector(int x, int y) : x(x), y(y){}

    // op overloading 
    void operator+(const Vector&src)
    {
        // this would point to v1 
        // src would be ref to v2 
        this->x = this->x + src.x;
        this->y = this->y + src.y;
    }  
        void display(){
            cout <<"x:" << x << 
            endl << "y:" << y << endl; 

        }
    
   
};



int main() {

    // cout<< add(1,5)<< endl;
    // cout << add(5.6, 4.5) << endl;
    Vector v1(2,3);
    Vector v2(4, 5);

    v1 + v2;
    // addition answer should be stored in v1 
    v1.display();
     return 0;
}