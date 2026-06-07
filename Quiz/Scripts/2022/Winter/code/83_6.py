try:
    a,b,c=6,0,2
    def g(b):
        global c
        a=2
        b=3
        c=4
        return a+b+c
    
    a,b,c=7,8,4
    print(g(b),a,b,c)
    
except: print('error')
