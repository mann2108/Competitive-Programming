def ans(k):
    four=0
    while(k>0):
        #print(k)
        if(int(k)==4):
            four+=1
        k/=10
        k=int(k)
    return four

t=int(input(""))
for i in range(t):
    n=int(input(""))
    print(ans(n))