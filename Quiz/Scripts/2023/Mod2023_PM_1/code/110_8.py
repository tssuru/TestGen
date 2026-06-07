try:
    def h(a,b):
        c=44
        if a:
            c=3
        elif a<=1:
             c=1
        else: 
            return 5
        return c
    
    print(h(7,-9))
    
except: print('error')
