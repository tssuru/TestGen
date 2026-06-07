try:
    def h(a,b):
        c=61
        if b:
            c=7
        if a<=2:
             return 5
        else: 
            c=0
        return c
    
    print(h(3,0))
    
except: print('error')
