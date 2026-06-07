try:
    a,b,c=8,3,9
    def g(b):
        a=3
        b=3
        c=1
        return a+b+c
    
    a,b,c=2,6,3
    print(g(b),a,b,c)
    
except: print('error')
