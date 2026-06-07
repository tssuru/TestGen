try:
    def g(b):
        u=23
        if b!=4: 
            u=7
        elif b>=5:
             return 0
        else:
             return 9
        return u
    
    print(g(-8))
    
except: print('error')
