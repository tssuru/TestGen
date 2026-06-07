try:
    a,b,c=3,1,8
    def g(a):
        a-=4
        b=1
        c=5
        return a+b+c
    
    a,b,c=6,9,2
    print(g(b),a,b,c)
except: print('error')
