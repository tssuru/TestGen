try:
    def g(a):
        u=61
        if a: 
            u=1
        if a<4:
             return 3
        else:
             u=0
        return u
    
    print(g(2))
    
except: print('error')
