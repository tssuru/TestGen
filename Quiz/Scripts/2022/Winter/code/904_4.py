try:
    def g(a,b):
        c=64
        if a:
            c=9
        if b<=5:
             return 4
        else: 
            c=6
        return c
    
    print(g(8,-7))
    
except: print('error')
