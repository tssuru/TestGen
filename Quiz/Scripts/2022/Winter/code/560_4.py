try:
    def g(b):
        u=13
        if b>4: 
            u=4
        if b<=1:
             return 6
        else:
             u=5
        return u
    
    print(g(9))
    
except: print('error')
