try:
    a,b,c=6,1,9
    def g(a):
        global c
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,5,8
    print(g(b),a,b,c)
    
except: print('error')
