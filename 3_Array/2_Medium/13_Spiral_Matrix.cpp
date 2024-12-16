#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> vec;
    int m = matrix.size();    // Rows
    int n = matrix[0].size(); // Columns
    int top = 0, left = 0, bottom = m - 1, right = n - 1;
    
    while (top <= bottom && left <= right)
    {
        // Traverse Left to right for top
        for (int i = left; i <= right; i++)
        {
            vec.push_back(matrix[top][i]);
        }
        top++;

        // Traverse from top to bottom for right
        for (int i = top; i <= bottom; i++)
        {
            vec.push_back(matrix[i][right]);
        }
        right--;

        // Traverse from right to left for bottom
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                vec.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top for left
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                vec.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return vec;
}

int main()
{
    int m, n; // Rows column
    cin >> m;
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> result = spiralOrder(matrix);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
