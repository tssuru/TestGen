try:
    def f(d):
        u=63
        if d>-1: 
            return 4
        elif d<=0:
             u=6
        else:
             return 0
        return u
    
    print(f(-2))
    
except: print('error')
