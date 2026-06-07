try:
    def g(d):
        u=86
        if d: 
            u=6
        elif d<=1:
             return 2
        else:
             return 5
        return u
    
    print(g(5))
    
except: print('error')
