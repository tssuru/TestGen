try:
    a,b,c=7,1,1
    def g(a):
        global c
        a=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=2,4,5
    print(g(b),a,b,c)
    
except: print('error')
