try:
    def f(b):
        u=20
        if b<=1: 
            u=1
        elif b==3:
             return 4
        else:
             u=7
        return u
    
    print(f(7))
    
except: print('error')
