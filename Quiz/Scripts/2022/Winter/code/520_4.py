try:
    def f(c):
        u=16
        if c>=0: 
            return 8
        if c>2:
             u=9
        else:
             return 0
        return u
    
    print(f(-5))
    
except: print('error')
