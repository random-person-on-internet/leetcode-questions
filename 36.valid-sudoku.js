/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function (board) {
    for (let i = 0; i < board.length; i++) {
        for (let j = 0; j < board[0].length; j++) {
            if (board[i][j] != '.') {
                let temp = board[i][j];
                board[i][j] = '.';
                if (!isValid(board, i, j, temp)) {
                    return false;
                }
                board[i][j] = temp;
            }
        }
    }
    return true;
};

const isValid = (board, row, col, c) => {
    for (let i = 0; i < 9; i++) {
        if (board[row][i] == c) return false;
        if (board[i][col] == c) return false;
    }

    let rs = Math.floor(row / 3) * 3;
    let cs = Math.floor(col / 3) * 3;

    for (let i = 0; i < 3; i++) {
        for (let j = 0; j < 3; j++) {
            if (board[rs + i][cs + j] == c) return false;
        }
    }

    return true;
}
