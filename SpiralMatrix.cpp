#include <iostream>
#include <vector>
using namespace std;

void SpiralMatrix(vector<vector<int>> &matrix);
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> Matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> Matrix[i][j];
        }
    }

    SpiralMatrix(Matrix);

    return 0;
}
void SpiralMatrix(vector<vector<int>> &matrix)
{
    int top = 0;
    int right = matrix[0].size()-1;
    int left=0;
    int bottom = matrix.size()-1;

    int direction = 0;

    while (left<=right && top <= bottom)
    {
        if (direction == 0)
        {
            for (int i = left; i <= right; i++)
            {
                cout<<matrix[top][i]<<" ";
            }
            top++;
        }
        else if (direction == 1)
        {
            for (int i = top; i <= bottom; i++)
            {
                cout<<matrix[i][right]<<" ";
            }
            right--;
        } 
        else if(direction == 2)
        {
            for (int i = right; i >= left; i--)
            {
                cout<<matrix[bottom][i]<<" ";
            }
            bottom--;
        }
        else
        {
            for (int i = bottom; i >= top; i--)
            {
                cout<<matrix[i][left]<<" ";
            }
            left++;
            
        }
        direction = (direction+1) % 4;
    }
    
}