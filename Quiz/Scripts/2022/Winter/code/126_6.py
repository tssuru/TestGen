try:
    a,b,c=5,9,7
    def g(b):
        global c
        a=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=1,3,2
    print(g(b),a,b,c)
    
except: print('error')
