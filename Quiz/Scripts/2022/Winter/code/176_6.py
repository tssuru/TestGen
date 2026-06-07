try:
    a,b,c=5,3,0
    def g(b):
        global c
        a*=1
        b=2
        c=1
        return a+b+c
    
    a,b,c=9,8,0
    print(g(b),a,b,c)
    
except: print('error')
