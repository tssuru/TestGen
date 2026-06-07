try:
    def f(b):
        u=11
        if b: 
            return 0
        elif b!=1:
             return 8
        else:
             u=6
        return u
    
    print(f(9))
    
except: print('error')
