try:
    a,b,c=9,1,3
    def g(b):
        global c
        a=3
        b=2
        c=3
        return a+b+c
    
    a,b,c=7,1,5
    print(g(b),a,b,c)
    
except: print('error')
