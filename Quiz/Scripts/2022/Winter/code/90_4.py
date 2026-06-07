try:
    def f(d):
        x=46
        if d<=1: 
            return 9
        if d==4:
             x=2
        else:
             return 5
        return x
    
    print(f(4))
    
except: print('error')
