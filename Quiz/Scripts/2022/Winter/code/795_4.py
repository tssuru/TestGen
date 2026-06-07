try:
    def g(c):
        x=12
        if c>=-1: 
            x=5
        elif c>1:
             return 9
        else:
             x=6
        return x
    
    print(g(2))
    
except: print('error')
