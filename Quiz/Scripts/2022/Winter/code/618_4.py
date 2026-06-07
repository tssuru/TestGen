try:
    def h(a,b):
        c=80
        if a==4:
            return 2
        elif b<=0:
             c=0
        else: 
            return 3
        return c
    
    print(h(8,1))
    
except: print('error')
