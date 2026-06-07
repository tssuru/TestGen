try:
    a,b,c=9,1,2
    def g(b):
        global c
        a=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=6,5,3
    print(g(b),a,b,c)
    
except: print('error')
