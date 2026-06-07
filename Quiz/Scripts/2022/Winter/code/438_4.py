try:
    def g(a,b):
        c=67
        if a:
            c=1
        elif b<1:
             return 5
        else: 
            c=9
        return c
    
    print(g(5,-1))
    
except: print('error')
