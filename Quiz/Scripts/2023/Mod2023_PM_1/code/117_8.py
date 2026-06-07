try:
    def g(c):
        w=18
        if c<=-2: 
            w=6
        elif c>=-4:
             w=1
        else:
             return 0
        return w
    
    print(g(9))
    
except: print('error')
