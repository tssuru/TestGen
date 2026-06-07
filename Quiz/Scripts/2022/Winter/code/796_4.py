try:
    def h(a,b):
        c=98
        if b:
            c=5
        elif b>-4:
             return 3
        else: 
            c=4
        return c
    
    print(h(3,3))
    
except: print('error')
