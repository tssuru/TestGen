try:
    def h(a,b):
        c=23
        if b:
            c=9
        if b<=4:
             c=8
        else: 
            return 5
        return c
    
    print(h(1,8))
    
except: print('error')
