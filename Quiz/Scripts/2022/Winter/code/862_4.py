try:
    def f(d):
        u=20
        if d<-3: 
            return 3
        elif d!=0:
             u=1
        else:
             return 5
        return u
    
    print(f(-1))
    
except: print('error')
