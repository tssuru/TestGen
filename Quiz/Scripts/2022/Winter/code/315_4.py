try:
    def h(a,b):
        c=87
        if b:
            c=5
        elif a<-3:
             return 1
        else: 
            c=7
        return c
    
    print(h(-4,-6))
    
except: print('error')
