#include "Circle.h"

int main(){
    Circle donut;
    Circle pizza(30);

    // 객체 이름으로 멤버 접근
    cout << donut.getArea() << endl;
    
    //객체 포인터로 멤버 접근
    Circle *p;
    p = &donut;
    cout << p-> getArea() << endl; // donut의 getArea() 호출
    cout << (*p).getArea() << endl; // pizza의 getArea() 호출
    
    return 0;

}