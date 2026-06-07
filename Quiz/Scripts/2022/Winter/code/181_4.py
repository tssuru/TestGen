try:
    def f(d):
        v=88
        if d==2: 
            return 4
        if d<-5:
             v=0
        else:
             v=2
        return v
    
    print(f(-6))
    
except: print('error')
