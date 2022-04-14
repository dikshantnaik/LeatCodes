


T = int(input())

for _ in range(T):
    N,K = map(int,input().split(" "))
    A_array = list(map(int,input().split(" ")))
    for money in A_array:
        if money>K:
            print(0,end='')
        else:
            print(1,end='')
            K = K - money