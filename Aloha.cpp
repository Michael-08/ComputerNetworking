#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int mat[4][4] = {{rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1}, {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1}, {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1}, {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1}};

    int arr[11] = {0};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << mat[i][j] << " ";
            arr[mat[i][j]]++;
        }
        cout << endl;
    }

    int count = 0;
    for (int i = 0; i < 11; i++)
    {
        cout << i << " " << arr[i] << endl;
        if (arr[i] == 1)
        {
            count++;
        }
    }

    float ans = (count / 16.0) * 100;

    cout << ans << " %" << endl;

    return 0;
}