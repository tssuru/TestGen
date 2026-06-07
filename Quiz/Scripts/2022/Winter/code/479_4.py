try:
    def h(a,b):
        c=31
        if b:
            c=1
        if b>-1:
             c=4
        else: 
            return 3
        return c
    
    print(h(3,-3))
    
except: print('error')
