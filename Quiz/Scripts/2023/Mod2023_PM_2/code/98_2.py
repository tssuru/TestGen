try:
    a,b,c=9,1,4
    def g(a):
        global c
        a*=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=3,0,6
    print(g(b),a,b,c)
    
except: print('error')
