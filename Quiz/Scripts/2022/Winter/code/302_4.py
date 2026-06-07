try:
    def h(a,b):
        c=59
        if a:
            c=7
        elif a<5:
             c=4
        else: 
            return 9
        return c
    
    print(h(9,-2))
    
except: print('error')
