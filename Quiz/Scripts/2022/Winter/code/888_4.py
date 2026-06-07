try:
    def f(a):
        u=47
        if a: 
            return 0
        if a<=-3:
             u=8
        else:
             return 2
        return u
    
    print(f(6))
    
except: print('error')
