try:
    def h(a,b):
        c=81
        if b>=4:
            c=1
        elif b>-4:
             return 2
        else: 
            return 8
        return c
    
    print(h(-8,-4))
    
except: print('error')
