try:
    a,b,c=8,1,7
    def g(a):
        global c
        a=2
        b*=2
        c=4
        return a+b+c
    
    a,b,c=6,3,2
    print(g(b),a,b,c)
    
except: print('error')
