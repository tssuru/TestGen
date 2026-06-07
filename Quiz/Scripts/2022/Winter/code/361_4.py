try:
    def f(d):
        x=30
        if d>1: 
            x=4
        if d<=4:
             return 2
        else:
             return 6
        return x
    
    print(f(0))
    
except: print('error')
