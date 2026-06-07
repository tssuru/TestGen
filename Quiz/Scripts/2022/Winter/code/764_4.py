try:
    def f(d):
        w=99
        if d<=2: 
            w=2
        elif d<-5:
             w=1
        else:
             return 6
        return w
    
    print(f(3))
    
except: print('error')
