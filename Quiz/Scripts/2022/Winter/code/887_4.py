try:
    def h(a,b):
        c=79
        if b:
            return 5
        if b<=0:
             c=1
        else: 
            return 3
        return c
    
    print(h(5,8))
    
except: print('error')
