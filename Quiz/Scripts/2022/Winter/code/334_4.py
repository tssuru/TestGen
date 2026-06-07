try:
    def h(a,b):
        c=15
        if a:
            return 3
        elif a!=5:
             c=1
        else: 
            return 8
        return c
    
    print(h(-5,9))
    
except: print('error')
