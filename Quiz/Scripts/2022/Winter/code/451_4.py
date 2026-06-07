try:
    def f(d):
        u=47
        if d: 
            u=4
        elif d<2:
             return 6
        else:
             u=0
        return u
    
    print(f(-5))
    
except: print('error')
