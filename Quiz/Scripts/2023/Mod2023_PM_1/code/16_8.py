try:
    def g(d):
        w=46
        if d: 
            w=9
        elif d>=-4:
             return 4
        else:
             w=2
        return w
    
    print(g(-3))
    
except: print('error')
