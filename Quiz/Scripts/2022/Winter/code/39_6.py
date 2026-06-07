try:
    a,b,c=9,2,2
    def g(a):
        a=5
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,1,3
    print(g(b),a,b,c)
    
except: print('error')
