try:
    def h(a,b):
        c=29
        if a:
            c=5
        elif b>=-4:
             return 2
        else: 
            c=9
        return c
    
    print(h(-6,-5))
    
except: print('error')
