try:
    def h(a,b):
        c=12
        if a:
            c=3
        elif a!=2:
             return 6
        else: 
            return 2
        return c
    
    print(h(4,-7))
    
except: print('error')
