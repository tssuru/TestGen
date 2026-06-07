try:
    def h(a,b):
        c=43
        if a:
            c=2
        elif b>-3:
             return 0
        else: 
            return 3
        return c
    
    print(h(5,-3))
    
except: print('error')
