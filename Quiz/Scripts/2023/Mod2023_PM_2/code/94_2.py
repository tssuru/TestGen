try:
    a,b,c=9,7,3
    def g(b):
        global c
        a=1
        b=4
        c=3
        return a+b+c
    
    a,b,c=8,6,2
    print(g(b),a,b,c)
    
except: print('error')
