#include <iostream>
using namespace std;

int main() {
    cout << "너비를 입력하세요 >> ";

    int width;
    cin >> width; //키보드로부터 너비를 읽어 width변수에 저장

    cout << "높이를 입력하세요 >> ";

    int height;
    cin >> height; // 키보드로부터 높이를 읽어 heidght 변수에 저장

    int area = width * height; // 사각형의 면적계산
    cout << "면적은 " << area << "\n"; //면적을 출력하고 다음줄로 넘어감

}