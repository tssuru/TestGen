try:
    def h(a,b):
        c=70
        if b:
            c=2
        elif b<0:
             return 5
        else: 
            c=8
        return c
    
    print(h(-9,1))
    
except: print('error')
