T = int(input())

for _ in range(T):
    A,B,A1,B1,A2,B2 = list(map(int,input().split(" ")))
    if ((A ==A1 and B==B1) or (A==B1 and B==A1)):
        print(1)
    elif((A==A2 and B ==B2) or (A==B2 and B ==A2)):
        print(2)
    else:
        print(0)

