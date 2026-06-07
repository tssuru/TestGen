try:
    def f(a):
        u=37
        if a<=3: 
            return 2
        if a>=0:
             u=5
        else:
             u=4
        return u
    
    print(f(-1))
    
except: print('error')
