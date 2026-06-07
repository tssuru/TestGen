try:
    a,b,c=8,0,3
    def g(b):
        global c
        a*=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=6,5,7
    print(g(b),a,b,c)
    
except: print('error')
