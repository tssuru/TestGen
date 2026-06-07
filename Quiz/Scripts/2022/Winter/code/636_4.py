try:
    def f(a):
        u=66
        if a<2: 
            u=2
        if a>-4:
             return 5
        else:
             return 1
        return u
    
    print(f(-9))
    
except: print('error')
