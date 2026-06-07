try:
    def f(d):
        w=62
        if d: 
            w=4
        if d<=-3:
             return 9
        else:
             w=9
        return w
    
    print(f(8))
    
except: print('error')
