#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include<math.h>
int main()
{
    using namespace std;// первое 

    vector<int> vec(10);
    vec[0] = 1;
    generate(vec.begin() + 1, vec.end(), [&vec]()->int
        {
            static int pos = 1;
            auto val = vec[pos - 1] * 2;
            ++pos;
            return val;
        });
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    return 0;
}
/*
using namespace std;
#define N 3
#define M 4

int main()// dnjhjt 
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    int matrix[N][M];
   
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            matrix[i][j] = rand() % 50;
        }
    }
   
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matrix[i][j];
        }
    }


    cout << "Matrix: " << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }


}
*/















