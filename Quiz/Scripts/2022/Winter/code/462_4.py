try:
    def h(d):
        x=15
        if d: 
            x=5
        if d>=2:
             return 3
        else:
             x=9
        return x
    
    print(h(-5))
    
except: print('error')
