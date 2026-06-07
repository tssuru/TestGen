try:
    def h(a,b):
        c=59
        if b:
            c=3
        elif a>0:
             return 4
        else: 
            c=2
        return c
    
    print(h(-3,9))
    
except: print('error')
