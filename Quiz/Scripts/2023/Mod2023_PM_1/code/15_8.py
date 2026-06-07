try:
    def f(d):
        z=17
        if d<=4: 
            z=8
        elif d!=-1:
             z=3
        else:
             return 7
        return z
    
    print(f(9))
    
except: print('error')
