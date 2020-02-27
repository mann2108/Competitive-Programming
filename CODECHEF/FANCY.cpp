test=int(input(""))
while test!=0:
    s=[x for x in input().split(" ")]
    flag=False
    if "not" in s:
        flag=True
    if flag:
        print("Real Fancy")
    else:
        print("regularly fancy")
    test-=1