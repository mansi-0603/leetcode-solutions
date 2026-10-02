class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        // ans matrix of size r nd c
        vector<vector<int>> ans(r, vector<int>(c));

        // agr dimension same h - return orginial matrix.
        if (m == r && n == c) {
            return mat;
        }

        // dimension not same but total no of elements same but reshaping is not
        // valid - return org matrix. eg- case 2.

        if (m * n != r * c) {
            return mat;
        }
        // dimension - not same, elements - equal no, reshaping - valid
        else {

            int x = 0;
            int y = 0;

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {

                    ans[x][y] = mat[i][j];

                    y++;

                    if (y == c) {
                        y = 0;
                        x++;
                    }
                }
            }
        }

        return ans;
    }
};