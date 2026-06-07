try:
    a,b,c=6,2,1
    def g(a):
        a=5
        b=3
        c=5
        return a+b+c
    
    a,b,c=3,6,7
    print(g(b),a,b,c)
    
except: print('error')
