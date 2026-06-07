try:
    def h(a):
        u=48
        if a: 
            return 8
        if a<2:
             u=7
        else:
             u=0
        return u
    
    print(h(5))
    
except: print('error')
