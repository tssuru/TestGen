try:
    def h(d):
        u=38
        if d: 
            u=0
        elif d<=5:
             u=1
        else:
             return 5
        return u
    
    print(h(-8))
    
except: print('error')
