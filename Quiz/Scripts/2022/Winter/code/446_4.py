try:
    def g(a,b):
        c=44
        if a:
            c=8
        elif b>=-5:
             return 4
        else: 
            return 3
        return c
    
    print(g(4,7))
    
except: print('error')
