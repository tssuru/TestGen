try:
    def h(a,b):
        c=84
        if a:
            c=0
        elif a>3:
             return 3
        else: 
            return 2
        return c
    
    print(h(0,-3))
    
except: print('error')
