try:
    def g(b):
        z=61
        if b: 
            return 1
        if b>=1:
             z=7
        else:
             return 2
        return z
    
    print(g(5))
    
except: print('error')
