#include<iostream>
#include<string>
using namespace std;

class RationalNumber{
    int numerator; //분자
    int denominator; // 분모
    
public:
    RationalNumber(){ this->numerator = 1; this->denominator = 1; }
    RationalNumber(RationalNumber& r);
    RationalNumber(int numerator = 1, int denomiator = 1);

    void operator = (RationalNumber& r);

    RationalNumber operator + (RationalNumber& r);
    RationalNumber operator - (RationalNumber& r);
    RationalNumber operator * (RationalNumber& r);
    RationalNumber operator / (RationalNumber& r);

    void show();
    double gcd(int a, int b);
    friend ostream& operator << (ostream& stream, RationalNumber& r);
};
 
RationalNumber::RationalNumber(int a, int b){
    this -> numerator = a / gcd(a, b);
    this -> denominator = b / gcd(a, b);

    if ( ((this->numerator<0)&&(this->denominator<0)) || ((this->numerator>0)&&(this->denominator<0)) ){
        this->numerator = -this->numerator;
        this->denominator = -this->denominator;
    }
}

RationalNumber::RationalNumber(RationalNumber& r){ 
    this -> numerator = r.numerator;
    this -> denominator = r.denominator;
}

void RationalNumber::operator = (RationalNumber& r){
    this -> numerator = r.numerator;
    this -> denominator = r.denominator;
}

RationalNumber RationalNumber::operator + (RationalNumber& r){
    int a,b ;
    
    a = this -> numerator * r.denominator + r.numerator * this -> denominator;
    b = this -> denominator * r.denominator;
    RationalNumber tmp(a, b);
    
    return tmp;
}

RationalNumber RationalNumber::operator - (RationalNumber& r){
    int a,b ;
    
    a = this -> numerator * r.denominator - r.numerator * this -> denominator;
    b = this -> denominator * r.denominator;
    RationalNumber tmp(a, b);
    
    return tmp;
}

RationalNumber RationalNumber::operator * (RationalNumber& r){
    int a,b ;
    
    a = this -> numerator * r.numerator;
    b = this -> denominator * r.denominator;
    RationalNumber tmp(a, b);
    
    return tmp;
}

RationalNumber RationalNumber::operator / (RationalNumber& r){
    int a,b ;
    
    a = this -> numerator * r.denominator;
    b = this -> denominator * r.numerator;
    RationalNumber tmp(a, b);
    
    return tmp;
}

void RationalNumber::show(){
    cout << this->numerator << "/" << this->denominator;
}

double RationalNumber::gcd(int a, int b){
    int t;
    
    while(b!=0){
        t = a%b;
        a = b;
        b = t;
    }

    return a;
}

ostream& operator << (ostream& stream, RationalNumber& r){
    stream << r.numerator << "/" << r.denominator;
    return stream;
}


int main(){
    RationalNumber a(1, 4), b(2, 4);
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    RationalNumber c = a+b;
    cout << "a + b = " << c << endl;

    RationalNumber d = a-b;
    cout << "a - b = " << d << endl;

    RationalNumber e = a*b;
    cout << "a * b = " << e << endl;

    RationalNumber f = a/b;
    cout << "a / b = " << f << endl;

    return 0;
}