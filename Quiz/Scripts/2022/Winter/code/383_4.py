try:
    def h(a,b):
        c=49
        if a:
            return 1
        elif a<2:
             c=5
        else: 
            return 4
        return c
    
    print(h(-3,8))
    
except: print('error')
