try:
    def f(c):
        w=10
        if c: 
            w=6
        elif c<=-3:
             return 1
        else:
             return 8
        return w
    
    print(f(-3))
    
except: print('error')
