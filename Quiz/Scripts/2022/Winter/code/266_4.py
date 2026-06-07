try:
    def f(a):
        u=76
        if a: 
            return 5
        if a<3:
             u=2
        else:
             return 6
        return u
    
    print(f(-1))
    
except: print('error')
