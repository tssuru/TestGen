try:
    def g(d):
        x=89
        if d<0: 
            x=3
        if d<=-2:
             return 2
        else:
             x=5
        return x
    
    print(g(7))
    
except: print('error')
