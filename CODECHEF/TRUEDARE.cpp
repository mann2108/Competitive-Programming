test1=int(input(""))
def Dont(tr1,dr1,ts1,ds1):
    for i in ts1:
        if i not in tr1:
            return False
    for i in ds1:
        if i not in dr1:
            return False
    return True
for i in range(test1):
    Tr1=int(input())
    TrS1=list(set([int(x) for x in input().split()]))
    Dr1=int(input())
    DrS1=list(set([int(x) for x in input().split()]))
    Ts1=int(input())
    TsS1=list(set([int(x) for x in input().split()]))
    Ds1=int(input())
    DsS1=list(set([int(x) for x in input().split()]))
    if Dont(TrS1,DrS1,TsS1,DsS1):
        print("yes")
    else:
        print("no")