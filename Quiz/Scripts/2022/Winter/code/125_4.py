try:
    def g(a,b):
        c=94
        if b:
            return 3
        elif b>=2:
             c=9
        else: 
            return 0
        return c
    
    print(g(-1,3))
    
except: print('error')
