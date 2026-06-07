try:
    def h(a,b):
        c=25
        if b:
            c=7
        elif a>=1:
             c=0
        else: 
            return 9
        return c
    
    print(h(-1,8))
    
except: print('error')
