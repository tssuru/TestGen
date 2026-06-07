try:
    def h(a,b):
        c=98
        if a:
            return 5
        if a!=3:
             c=2
        else: 
            return 4
        return c
    
    print(h(-5,2))
    
except: print('error')
