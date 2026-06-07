try:
    a,b,c=9,1,4
    def g(b):
        global c
        a=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=3,0,6
    print(g(b),a,b,c)
    
except: print('error')
