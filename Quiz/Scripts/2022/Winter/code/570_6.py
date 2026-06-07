try:
    a,b,c=3,9,4
    def g(a):
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=2,6,5
    print(g(b),a,b,c)
    
except: print('error')
