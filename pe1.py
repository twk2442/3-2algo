import sys
N = int(sys.stdin.readline())
board = [list(map(int,sys.stdin.readline().split())) for _ in range(N)]

white = 0
blue = 0

def part(x, y, n):
    global blue, white
    check = board[x][y]
    for i in range(x, x+n):
        for j in range(y, y+n):
            if check != board[i][j]:
                part(x,y,n//2)#1사분면
                part(x,y+n//2,n//2)#2사분면
                part(x+n//2,y,n//2)#3사분면
                part(x+n//2,y+n//2,n//2)#4사분면
                return
    if check==0:
        white+=1
        return
    else:  
        blue+=1
        return
            
part(0,0,N)
print(white)
print(blue)