try:
    def g(b):
        u=67
        if b: 
            u=5
        elif b>=-5:
             return 0
        else:
             u=4
        return u
    
    print(g(1))
    
except: print('error')
