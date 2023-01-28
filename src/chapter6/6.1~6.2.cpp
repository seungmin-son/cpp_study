#include <iostream>

using namespace std;
#define NUM_STUDENTS 10000
struct Rectangle
{
    int length;
    int width;
};

enum StudentName
{
    BAE,
    CHOI,
    KIM,
};

void dodo (int students_score[]) //선언된 매개변수는 배열이 아니라 주소, 일종의 포인터 개념
{
    cout << &students_score <<endl;
    cout << students_score <<endl;
    cout << students_score[0] <<endl;
    cout << students_score[1] <<endl;
    cout << students_score[2] <<endl;
    
}

int main()
{
    int score[5];

    cout << sizeof(score) << endl; //4 x 5 = 20bytes
    
    Rectangle rect_arr[10];
    cout << sizeof(rect_arr) << endl; // 2 x 4 x 10 = 80bytes

    int my_arr[5] = {1,2,3,4,5};

    for(int i =0; i <  5; i++)
        cout << my_arr[i] << endl;

    cout << " " << endl;
    ////////////////////////////////////////////////////////////////////////////////////
    cout << my_arr[BAE] << endl; //자주 사용하는 표현은 아님

    int arr1[NUM_STUDENTS]; //정적 할당
    ////////////////////////////////////////////////////////////////////////////////////

    int students_score[20] = {10,20,30,40,50,};
    cout << int(*students_score) <<endl;
    cout << students_score[0] <<endl;
    cout << students_score[1] <<endl;
    cout << students_score[2] <<endl;
    cout << " " << endl;

    dodo(students_score);

    return 0;

}