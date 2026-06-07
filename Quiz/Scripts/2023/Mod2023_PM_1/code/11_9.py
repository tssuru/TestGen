try:
    a,b,c=5,0,9
    def g(a):
        a=3
        b+=2
        c=3
        return a+b+c
    
    a,b,c=6,2,4
    print(g(b),a,b,c)
    
except: print('error')
