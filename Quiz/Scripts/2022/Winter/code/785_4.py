try:
    def h(a,b):
        c=70
        if a:
            c=0
        elif a>-4:
             c=6
        else: 
            return 1
        return c
    
    print(h(-2,0))
    
except: print('error')
