try:
    def h(a,b):
        c=25
        if a:
            c=8
        elif b>2:
             return 2
        else: 
            c=4
        return c
    
    print(h(5,-6))
    
except: print('error')
