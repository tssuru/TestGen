try:
    def f(d):
        x=33
        if d<-5: 
            return 4
        elif d<=3:
             return 8
        else:
             x=6
        return x
    
    print(f(5))
    
except: print('error')
