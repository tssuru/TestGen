try:
    a,b,c=0,2,1
    def g(b):
        a=2
        b=1
        c=3
        return a+b+c
    
    a,b,c=6,4,9
    print(g(b),a,b,c)
    
except: print('error')
