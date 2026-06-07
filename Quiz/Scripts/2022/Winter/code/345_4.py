try:
    def g(d):
        u=46
        if d: 
            u=5
        elif d<0:
             u=9
        else:
             return 8
        return u
    
    print(g(8))
    
except: print('error')
