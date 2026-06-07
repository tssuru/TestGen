try:
    a,b,c=7,1,5
    def g(b):
        global c
        a=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,1,3
    print(g(b),a,b,c)
    
except: print('error')
