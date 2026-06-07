try:
    a,b,c=6,4,2
    def g(a):
        a=2
        b+=3
        c=4
        return a+b+c
    
    a,b,c=7,3,9
    print(g(b),a,b,c)
    
except: print('error')
