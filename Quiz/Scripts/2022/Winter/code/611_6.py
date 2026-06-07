try:
    a,b,c=8,2,6
    def g(b):
        global c
        a=4
        b=5
        c=4
        return a+b+c
    
    a,b,c=5,7,3
    print(g(b),a,b,c)
    
except: print('error')
