try:
    a,b,c=4,1,2
    def g(b):
        global c
        a*=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=3,0,9
    print(g(b),a,b,c)
    
except: print('error')
