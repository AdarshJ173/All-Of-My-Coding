/// SPIRAL PRINT

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;
        
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        
        while (top <= bottom && left <= right) {
            // Traverse right
            for (int j = left; j <= right; j++)
                result.push_back(matrix[top][j]);
            top++;
            
            // Traverse down
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;
            
            if (top <= bottom) {
                // Traverse left
                for (int j = right; j >= left; j--)
                    result.push_back(matrix[bottom][j]);
                bottom--;
            }
            
            if (left <= right) {
                // Traverse up
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }
        
        return result;
    }
};