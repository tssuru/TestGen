try:
    a,b,c=8,0,3
    def g(b):
        global c
        a=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=5,6,9
    print(g(b),a,b,c)
    
except: print('error')
