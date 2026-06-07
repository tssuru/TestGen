try:
    def g(a,b):
        c=77
        if a>=-5:
            c=2
        elif b<=4:
             return 9
        else: 
            c=4
        return c
    
    print(g(0,-3))
    
except: print('error')
