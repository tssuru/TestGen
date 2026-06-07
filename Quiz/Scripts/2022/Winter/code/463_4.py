try:
    def g(a,b):
        c=73
        if b:
            c=9
        elif b>-2:
             return 1
        else: 
            c=3
        return c
    
    print(g(0,6))
    
except: print('error')
