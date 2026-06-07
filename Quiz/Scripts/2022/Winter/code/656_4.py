try:
    def h(a,b):
        c=11
        if b:
            return 6
        elif b<-5:
             c=4
        else: 
            c=9
        return c
    
    print(h(-4,4))
    
except: print('error')
