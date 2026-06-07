try:
    def g(b):
        v=22
        if b: 
            v=1
        elif b!=0:
             return 3
        else:
             return 8
        return v
    
    print(g(2))
    
except: print('error')
