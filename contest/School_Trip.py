
from cv2 import split


n = int(input())
for _ in range(n):
    N,S,K = map(int,input().split())
    S_arr = []
    for _ in range(0,S):
        F,X,Y = map(int,input().split())
        S_arr.append([F,X,Y])
    print(S_arr)    

    
    
