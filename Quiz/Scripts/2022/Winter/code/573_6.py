try:
    a,b,c=5,1,2
    def g(a):
        a*=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=9,7,4
    print(g(b),a,b,c)
    
except: print('error')
