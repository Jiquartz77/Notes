#include "leetcode.h"
using namespace std;

class Solution{
public:
        vector<vector<int>> generateMatrix(int n) {
            vector<vector<int>> res(n, vector<int>(n, 0));
            int startx = 0, starty = 0;
            int loop = n / 2; // 每个圈循环几次，例如n为奇数3，那么loop = 1 只是循环一圈，矩阵中间的值需要单独处理
            int mid = n / 2; // 矩阵中间的位置，例如：n为3， 中间的位置就是(1，1)，n为5，中间位置为(2, 2)
            int count = 1;  int offset = 1;
            int i,j;

            while (loop --) {
                i = startx; j = starty;

                for (j; j < n - offset; j++) {
                    res[i][j] = count++;
                }

                for (i; i < n - offset; i++) {
                    res[i][j] = count++;
                }

                for (; j > starty; j--) {
                    res[i][j] = count++;
                }

                for (; i > startx; i--) {
                    res[i][j] = count++;
                }

                startx++;  starty++;
                offset ++;
            }

            // 如果n为奇数的话，需要单独给矩阵最中间的位置赋值
            if (n % 2) {
                res[mid][mid] = count;
            }

            return res;
            }
    int main(){
        Solution *sol =new Solution();
        auto res = sol->generateMatrix(4);

    for ( auto p = cbegin(res) ; p != cend(res); ++p) {   //用begin()和end()来替代手工的控制变量
                for ( auto q = cbegin(*p); q != cend(*p); ++q ) {
                    cout<<*q<<"  ";
                }
        cout<<endl; cout<<endl;
    }

        return 0;
    }
};
