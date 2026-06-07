try:
    def h(a,b):
        c=99
        if a:
            return 3
        if b>=-2:
             c=9
        else: 
            return 4
        return c
    
    print(h(-7,-2))
    
except: print('error')
