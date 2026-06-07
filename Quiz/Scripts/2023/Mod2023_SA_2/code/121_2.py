try:
    a,b,c=8,6,0
    def g(a):
        a*=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,5,4
    print(g(b),a,b,c)
    
except: print('error')
