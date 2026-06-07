try:
    def h(a,b):
        c=80
        if a:
            c=1
        elif b>=4:
             return 9
        else: 
            c=8
        return c
    
    print(h(-9,0))
    
except: print('error')
