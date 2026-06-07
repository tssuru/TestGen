try:
    def g(a):
        u=96
        if a: 
            u=5
        if a>=-4:
             u=3
        else:
             return 0
        return u
    
    print(g(-2))
    
except: print('error')
