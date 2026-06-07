try:
    def f(c):
        u=67
        if c>=4: 
            u=1
        elif c>2:
             return 0
        else:
             u=3
        return u
    
    print(f(2))
    
except: print('error')
