try:
    a,b,c=5,1,3
    def g(b):
        global c
        a*=3
        b=5
        c=2
        return a+b+c
    
    a,b,c=9,8,0
    print(g(b),a,b,c)
    
except: print('error')
