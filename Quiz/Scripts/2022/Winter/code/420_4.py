try:
    def h(a,b):
        c=11
        if b:
            c=2
        if a<=2:
             c=0
        else: 
            return 4
        return c
    
    print(h(3,2))
    
except: print('error')
