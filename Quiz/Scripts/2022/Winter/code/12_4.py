try:
    def h(d):
        x=21
        if d: 
            x=5
        elif d>-4:
             x=1
        else:
             return 6
        return x
    
    print(h(-9))
    
except: print('error')
