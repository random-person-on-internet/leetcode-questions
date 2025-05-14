/**
 * @param {character[][]} board
 * @return {void} Do not return anything, modify board in-place instead.
 */
var solveSudoku = function (board) {
    if (board.length == 0) {
        return;
    }
    solve(board);
};

const isValid = (board, row, col, c) => {
    for (let i = 0; i < 9; i++) {
        if (board[i][col] != '.' && board[i][col] == c) {
            return false;
        }
        if (board[row][i] != '.' && board[row][i] == c) {
            return false;
        }
    }
    // for 3*3 block
    let rs = Math.floor(row / 3) * 3;
    let cs = Math.floor(col / 3) * 3;

    for (let i = 0; i < 3; i++) {
        for (let j = 0; j < 3; j++) {
            if (board[rs + i][cs + j] != '.' && board[rs + i][cs + j] == c) {
                return false;
            }
        }
    }
    return true;
}

const solve = (board) => {
    for (let i = 0; i < board.length; i++) {
        for (let j = 0; j < board[0].length; j++) {
            if (board[i][j] == '.') {
                for (let c of ['1', '2', '3', '4', '5', '6', '7', '8', '9']) {
                    if (isValid(board, i, j, c)) {
                        board[i][j] = c;

                        if (solve(board)) {
                            return true;
                        } else {
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
