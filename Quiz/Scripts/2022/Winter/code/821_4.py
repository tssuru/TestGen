try:
    def h(d):
        x=73
        if d: 
            x=7
        elif d>=1:
             return 5
        else:
             x=8
        return x
    
    print(h(6))
    
except: print('error')
