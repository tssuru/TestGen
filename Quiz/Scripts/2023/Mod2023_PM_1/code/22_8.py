try:
    def f(b):
        u=12
        if b>=1: 
            u=8
        elif b!=0:
             return 5
        else:
             u=9
        return u
    
    print(f(1))
    
except: print('error')
