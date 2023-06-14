#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout << '문자열을 입력하세요(한글 안 됨) :' << endl;
    getline(cin, s, '\n'); // 문자열 입력
    int len = s.length(); // 문자열의 길이
    
    for (int i = 0; i<len ; i++){
        string first = s.substr(len-1, len); //맨 앞의 문자 1개를 문자열로 분리
        string sub = s.substr(0, len-1); // 나머지 문자들을 문자열로 분리
        s = first + sub; // 두 문자열을 연결하요 새로운 문자열로 만들기
        cout << s << endl;
    }
    return 0;
}