try:
    def h(a,b):
        c=37
        if a:
            return 6
        elif b>=2:
             c=8
        else: 
            c=9
        return c
    
    print(h(-5,5))
    
except: print('error')
