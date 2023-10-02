class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        long long int row=matrix.size();
        long int col=matrix[0].size();
        long long int s=0;
        long long int e=row*col-1;
        long long int mid=s+((e-s)/2);

        while(s<=e)
        {
            if(matrix[mid/col][mid%col]==target)
            {
                return true;
            }
            else if(matrix[mid/col][mid%col]>target)
            {
                e=mid-1;
            }

            else
            {
                s=mid+1;
            }

            mid=s+((e-s)/2);
        }
        return false;


    }
};
