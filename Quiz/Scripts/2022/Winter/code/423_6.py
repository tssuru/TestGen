try:
    a,b,c=4,6,2
    def g(b):
        global c
        a=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=5,0,1
    print(g(b),a,b,c)
    
except: print('error')
