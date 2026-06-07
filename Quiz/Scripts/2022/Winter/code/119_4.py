try:
    def f(d):
        u=64
        if d<1: 
            u=3
        elif d==2:
             return 7
        else:
             u=6
        return u
    
    print(f(1))
    
except: print('error')
