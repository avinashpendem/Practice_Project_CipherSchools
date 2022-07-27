#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string reverse(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        char c = s[left];
        s[left] = s[right];
        s[right] = c;
        left++, right--;
    }
    return s;
}

int main()
{
    string s = "Hello";
    cout << reverse(s) << endl;
    return 0;
}

/*
class Matrix
{
    vector<vector<int>> matrix;
public:
    void takeInput(int n, int m)
    {
        int num;
        for (int i = 0; i < n; i++)
        {
            vector<int> b;
            for (int j = 0; j < m; j++)
            {
                cin >> num;
                b.push_back(num);
            }
            matrix.push_back(b);
        }
    }
    Matrix operator+(const Matrix &m)
    {
        Matrix sum;
        for (int i = 0; i < matrix.size(); i++)
        {
            vector<int> row;
            for (int j = 0; j < matrix[i].size(); j++)
            {
                row.push_back(matrix[i][j] + m.matrix[i][j]);
            }
            sum.matrix.push_back(row);
        }
        return sum;
    }
    void display()
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Matrix x;
        Matrix y;
        Matrix result;
        int n, m;
        cin >> n >> m;
        x.takeInput(n, m);
        y.takeInput(n, m);
        result = x + y;
        result.display();
    }
    return 0;
}
*/ 
