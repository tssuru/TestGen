try:
    def h(a,b):
        c=91
        if b<=2:
            c=0
        if b<-1:
             c=3
        else: 
            return 5
        return c
    
    print(h(-7,-6))
    
except: print('error')
