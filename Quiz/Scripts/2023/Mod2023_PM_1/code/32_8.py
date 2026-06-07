try:
    def h(a,b):
        c=55
        if a:
            c=7
        elif b>-1:
             c=5
        else: 
            return 9
        return c
    
    print(h(6,-6))
    
except: print('error')
