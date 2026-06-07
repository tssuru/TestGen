try:
    def f(d):
        u=25
        if d>=-4: 
            u=1
        elif d==0:
             u=5
        else:
             return 2
        return u
    
    print(f(4))
    
except: print('error')
