try:
    a,b,c=3,0,9
    def g(b):
        a=1
        b=1
        c=2
        return a+b+c
    
    a,b,c=6,7,1
    print(g(b),a,b,c)
    
except: print('error')
