class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(0,9):
            row=[0]*10
            for j in range(0,9):
                if board[i][j] != '.' :
                    row[int(board[i][j])] += 1
                    if row[int(board[i][j])] > 1 : 
                        return False 
        for i in range(0,9):
            col=[0]*10
            for j in range(0,9):
                if board[j][i] != '.' :
                    col[int(board[j][i])]+=1
                    if col[int(board[j][i])] > 1 : 
                        return False 
        for i in range(0,3):
            for j in range(0,3):
                box=[0]*10
                for a in range(i*3 ,i*3 + 3):
                    for b in range(j*3, j*3 +3):
                        if board[a][b] != '.' :
                            box[int(board[a][b])] +=1
                            if box[int(board[a][b])] >1 :
                                return False
        return True

            
