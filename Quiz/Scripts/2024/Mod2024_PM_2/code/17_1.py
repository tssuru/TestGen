try:
    a,b,c=1,2,3
    def g(a):
        global c
        a=5
        b=3
        c=1
        return a+b+c
    
    a,b,c=6,7,4
    print(g(b),a,b,c)
    
except: print('error')
