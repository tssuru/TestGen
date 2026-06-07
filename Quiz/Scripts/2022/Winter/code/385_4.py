try:
    def g(b):
        w=21
        if b>=3: 
            return 2
        if b!=1:
             w=6
        else:
             return 3
        return w
    
    print(g(9))
    
except: print('error')
