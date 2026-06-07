try:
    def h(a,b):
        c=73
        if b>=4:
            c=9
        if a<3:
             c=5
        else: 
            return 3
        return c
    
    print(h(1,0))
    
except: print('error')
