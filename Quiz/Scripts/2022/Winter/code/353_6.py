try:
    a,b,c=2,0,6
    def g(a):
        global c
        a*=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,2,8
    print(g(b),a,b,c)
    
except: print('error')
