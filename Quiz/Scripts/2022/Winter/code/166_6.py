try:
    a,b,c=4,7,8
    def g(b):
        global c
        a=4
        b=3
        c=4
        return a+b+c
    
    a,b,c=6,3,5
    print(g(b),a,b,c)
    
except: print('error')
