try:
    def h(d):
        u=22
        if d!=0: 
            u=5
        if d>=3:
             u=4
        else:
             return 1
        return u
    
    print(h(8))
    
except: print('error')
