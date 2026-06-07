try:
    def f(a):
        v=72
        if a: 
            return 4
        elif a<-3:
             v=6
        else:
             v=8
        return v
    
    print(f(-1))
    
except: print('error')
