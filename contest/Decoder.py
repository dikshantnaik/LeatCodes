import re

def binaryToDecimal(n):
    return int(n,2)

def OctToDec(n):
    return int(n, 8);

def HexatoDev(n):
    return int(n,16)

if __name__ == "__main__":
    n = int(input())
    for _ in range(n):
        str = input()
        # str = "m678o9134n71110011n81110100n01101111o054o747x050n81011001o5167o6172n91100000o0143m4101o4164o6133x16fo2166"
        WORDS_WITHOUT_C = re.split("[mnox]",str)
        WORDS_WITHOUT_C = WORDS_WITHOUT_C[1:]

        C = re.findall("[mnox]",str)
        SOL_STRING = ""
        for i in range(0,len(WORDS_WITHOUT_C)):
            L = int(WORDS_WITHOUT_C[i][:1])
            val = WORDS_WITHOUT_C[i][1:]
            DecimalValue = 0
            if(C[i]=="n"):
                DecimalValue = binaryToDecimal(val)
            elif C[i] =="o":
                DecimalValue = OctToDec(val)
            elif C[i] =="x":
                DecimalValue = HexatoDev(val)
            

            if C[i] =="m":
                DecimalValue = int(val)


            if DecimalValue%2==0:
                DecimalValue = DecimalValue + L
            else:
                DecimalValue = DecimalValue- L
            # print("Value :",val,"\tDecimal",DecimalValue,"\tL: ",L,"\tAnswer : ",chr(DecimalValue))
            SOL_STRING = SOL_STRING + chr(DecimalValue) 

        print(SOL_STRING)

