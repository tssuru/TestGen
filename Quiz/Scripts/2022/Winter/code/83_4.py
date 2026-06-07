try:
    def g(d):
        w=30
        if d: 
            w=0
        elif d<5:
             return 2
        else:
             return 8
        return w
    
    print(g(2))
    
except: print('error')
