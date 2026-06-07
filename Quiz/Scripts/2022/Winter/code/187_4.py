try:
    def f(b):
        u=36
        if b: 
            return 7
        elif b!=5:
             u=4
        else:
             return 6
        return u
    
    print(f(-8))
    
except: print('error')
