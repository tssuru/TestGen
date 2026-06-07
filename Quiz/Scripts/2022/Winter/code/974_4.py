try:
    def h(a,b):
        c=61
        if b:
            c=9
        elif b==0:
             return 4
        else: 
            c=3
        return c
    
    print(h(5,-5))
    
except: print('error')
