t = int(input())

for _ in range(t):
    dsa2,toc2,dm2 = map(int,input().split(" "))
    DRAGON_TOTAL = dsa2+toc2+dm2
    dsa1,toc1,dm1 = map(int,input().split(" "))
    SLOTH_TOTAL = dsa1+toc1+dm1
    if(SLOTH_TOTAL>DRAGON_TOTAL):
        print("SLOTH")
    elif(SLOTH_TOTAL==DRAGON_TOTAL):
        if(dsa1>dsa2):
            print("SLOTH")
        elif(dsa1==dsa2):
            if(toc1>toc2):
                print("SLOTH")
            elif(toc1==toc2 and dm1==dm2):
                print("TIE")
            else:
                print("DRAGON")
        else:
            print("DRAGON")
    else:
        print("DRAGON")



