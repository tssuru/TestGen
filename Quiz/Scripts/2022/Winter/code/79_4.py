try:
    def g(d):
        u=18
        if d>=4: 
            u=6
        elif d<3:
             return 5
        else:
             return 0
        return u
    
    print(g(-1))
    
except: print('error')
