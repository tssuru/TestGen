try:
    a,b,c=1,5,2
    def g(b):
        global c
        a*=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=6,7,3
    print(g(b),a,b,c)
    
except: print('error')
