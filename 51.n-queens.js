/**
 * @param {number} n
 * @return {string[][]}
 */
var solveNQueens = function (n) {
    // create board
    const board = [];
    for (let i = 0; i < n; i++) {
        const row = [];
        for (let j = 0; j < n; j++) {
            row.push(".");
        }
        board.push(row);
    }

    const ans = [];
    // send starting row, ans and board to solve fn
    solve(0, ans, board);

    return ans;
};

const isValid = (i, j, board) => {
    let row = i;
    let col = j;
    let n = board.length;

    // diagonal checking
    // we are moving from top to bottumn so just need to check first 2 quad
    i = row - 1;
    j = col - 1;
    while (i >= 0 && j >= 0) {
        if (board[i][j] != '.') return false;
        i--;
        j--;
    }
    i = row - 1;
    j = col + 1;
    while (i >= 0 && j < n) {
        if (board[i][j] != '.') return false;
        i--;
        j++;
    }
    // check in that col
    j = col;
    for (let i = 0; i < row; i++) {
        if (board[i][j] != '.') return false;
    }

    return true;
}

const solve = (row, ans, board) => {
    // if done, add to ans
    if (row == board.length) {
        const res = [];
        for (let i = 0; i < board.length; i++) {
            res.push(board[i].join(''));
        }
        ans.push(res);
        return;
    }

    // if not, move to next
    for (let i = 0; i < board.length; i++) {
        if (isValid(row, i, board)) {
            board[row][i] = 'Q';
            solve(row + 1, ans, board);
            board[row][i] = '.';
        }
    }
}
