try:
    def g(d):
        z=13
        if d: 
            return 4
        if d>2:
             z=0
        else:
             return 6
        return z
    
    print(g(5))
    
except: print('error')
