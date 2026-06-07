try:
    def h(c):
        u=96
        if c: 
            return 4
        if c>0:
             u=7
        else:
             return 9
        return u
    
    print(h(2))
    
except: print('error')
