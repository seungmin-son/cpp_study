#include <iostream>

using namespace std;
int main()
{
    int score[] = { 50, 60, 70 ,80 ,90 ,100};
    const int num_students = sizeof(score) / sizeof(int);

    int total_score = 0;

    for (int i =0; i<num_students; i++)
    {
        total_score += score[i];


    }

    cout << total_score << endl;
    return 0;
}