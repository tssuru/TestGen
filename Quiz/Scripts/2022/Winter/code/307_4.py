try:
    def g(c):
        u=17
        if c: 
            return 6
        elif c>4:
             return 7
        else:
             u=5
        return u
    
    print(g(2))
    
except: print('error')
