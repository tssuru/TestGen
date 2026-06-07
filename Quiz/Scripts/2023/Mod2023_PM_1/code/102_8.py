try:
    def g(c):
        w=35
        if c>5: 
            return 7
        elif c<1:
             w=8
        else:
             w=0
        return w
    
    print(g(-3))
    
except: print('error')
