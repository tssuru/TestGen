try:
    def h(a):
        v=10
        if a!=1: 
            v=6
        elif a<-5:
             return 1
        else:
             v=4
        return v
    
    print(h(5))
    
except: print('error')
