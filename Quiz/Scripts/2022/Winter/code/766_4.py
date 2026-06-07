try:
    def g(a,b):
        c=83
        if b:
            c=9
        elif b<2:
             return 5
        else: 
            return 7
        return c
    
    print(g(-8,9))
    
except: print('error')
