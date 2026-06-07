try:
    def f(d):
        u=19
        if d<5: 
            u=7
        elif d==4:
             return 0
        else:
             u=4
        return u
    
    print(f(2))
    
except: print('error')
