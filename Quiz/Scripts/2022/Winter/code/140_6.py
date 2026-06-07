try:
    a,b,c=2,4,7
    def g(a):
        a*=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=6,0,3
    print(g(b),a,b,c)
    
except: print('error')
