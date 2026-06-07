try:
    def f(c):
        u=40
        if c<=-1: 
            return 0
        elif c!=-5:
             u=8
        else:
             return 2
        return u
    
    print(f(4))
    
except: print('error')
