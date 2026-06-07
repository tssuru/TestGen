try:
    def f(b):
        u=96
        if b: 
            u=9
        elif b>-2:
             u=8
        else:
             return 7
        return u
    
    print(f(-7))
    
except: print('error')
