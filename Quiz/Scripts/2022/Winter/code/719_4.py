try:
    def f(b):
        u=17
        if b>-2: 
            u=8
        if b>=-1:
             return 0
        else:
             u=1
        return u
    
    print(f(-7))
    
except: print('error')
