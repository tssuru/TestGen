try:
    a,b,c=8,2,7
    def g(a):
        global c
        a=1
        b*=5
        c=2
        return a+b+c
    
    a,b,c=6,0,5
    print(g(b),a,b,c)
    
except: print('error')
