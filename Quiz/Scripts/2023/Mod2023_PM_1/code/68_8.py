try:
    def g(b):
        u=21
        if b: 
            u=6
        elif b!=-4:
             u=3
        else:
             return 9
        return u
    
    print(g(8))
    
except: print('error')
