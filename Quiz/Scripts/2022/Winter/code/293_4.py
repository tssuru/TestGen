try:
    def g(c):
        v=31
        if c: 
            return 8
        elif c<0:
             return 5
        else:
             v=9
        return v
    
    print(g(0))
    
except: print('error')
