try:
    def g(b):
        u=55
        if b<5: 
            return 4
        elif b==1:
             u=3
        else:
             u=6
        return u
    
    print(g(8))
    
except: print('error')
