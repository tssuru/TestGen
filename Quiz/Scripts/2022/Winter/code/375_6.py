try:
    a,b,c=3,2,4
    def g(a):
        global c
        a=5
        b+=2
        c=2
        return a+b+c
    
    a,b,c=7,3,5
    print(g(b),a,b,c)
    
except: print('error')
