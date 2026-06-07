try:
    def h(a,b):
        c=13
        if a:
            return 5
        elif a<=-1:
             c=8
        else: 
            return 3
        return c
    
    print(h(1,9))
    
except: print('error')
