try:
    def g(c):
        u=77
        if c: 
            return 0
        if c>=4:
             u=9
        else:
             return 7
        return u
    
    print(g(-3))
    
except: print('error')
