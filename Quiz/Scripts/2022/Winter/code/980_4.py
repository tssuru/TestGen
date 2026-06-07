try:
    def g(a,b):
        c=14
        if a:
            c=0
        elif b<=3:
             return 5
        else: 
            c=6
        return c
    
    print(g(0,7))
    
except: print('error')
