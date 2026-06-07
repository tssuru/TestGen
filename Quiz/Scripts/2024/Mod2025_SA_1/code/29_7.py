try:
    def g(d):
        w=65
        if d>=-5: 
            return 0
        if d<1:
             w=2
        else:
             return 8
        return w
    
    print(g(-6))
except: print('error')
