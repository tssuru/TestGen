try:
    def f(a):
        u=75
        if a==2: 
            u=9
        elif a>-5:
             u=6
        else:
             return 2
        return u
    
    print(f(-8))
    
except: print('error')
