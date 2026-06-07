try:
    a,b,c=5,4,7
    def g(b):
        global c
        a=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=8,2,1
    print(g(b),a,b,c)
    
except: print('error')
