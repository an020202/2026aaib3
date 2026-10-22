class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {0}; // 用 C 語言的陣列，模擬井字遊戲的 3x3 共 9 個格子，先放 0
        string result[3] = {"Draw", "A", "B"}; // 結果的字母
        int who = 1; // 現在輪到誰 who 來下棋 1:A, 2:B

        for (vector<int> move : moves) { // 迴圈，逐一處理中資料結構
            int i = move[0], j = move[1];
            a[i][j] = who; // 現在輪到誰 who 來下棋

            // 中間下課 10 分鐘，等一下 11:15 回來，把中間的井字遊戲完成
            if (a[0][0] == who && a[0][1] == who && a[0][2] == who) return result[who]; // 上橫
            if (a[1][0] == who && a[1][1] == who && a[1][2] == who) return result[who]; // 中橫
            if (a[2][0] == who && a[2][1] == who && a[2][2] == who) return result[who]; // 下橫

            if (a[0][0] == who && a[1][0] == who && a[2][0] == who) return result[who]; // 左直
            if (a[0][1] == who && a[1][1] == who && a[2][1] == who) return result[who]; // 中直
            if (a[0][2] == who && a[1][2] == who && a[2][2] == who) return result[who]; // 右直

            if (a[0][0] == who && a[1][1] == who && a[2][2] == who) return result[who]; // 斜線左上、右下
            if (a[2][0] == who && a[1][1] == who && a[0][2] == who) return result[who]; // 斜線左下、右上

            if (who == 1) who = 2;
            else who = 1;
        }
        if(moves.size()==9)return"Draw";
        else return "Pending";
        //return "Draw"; // 最後離開迴圈，沒有人得勝，就平手 Draw（這是錯的！！！）

    }
};
