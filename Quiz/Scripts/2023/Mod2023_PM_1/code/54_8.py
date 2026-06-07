try:
    def h(a,b):
        c=71
        if a:
            c=2
        elif b>=2:
             return 6
        else: 
            return 8
        return c
    
    print(h(9,7))
    
except: print('error')
