t = int(input())

for _ in range(t):
    n,m = map(int,input().split(" "))
    if n%2 ==0 and m % 2 == 0:
        print("YES")
    else:
        print("NO")
