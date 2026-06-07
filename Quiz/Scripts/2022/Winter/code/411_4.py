try:
    def h(d):
        v=75
        if d: 
            v=6
        elif d<1:
             return 1
        else:
             return 8
        return v
    
    print(h(-2))
    
except: print('error')
