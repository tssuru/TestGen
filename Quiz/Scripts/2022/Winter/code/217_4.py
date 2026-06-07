try:
    def h(a,b):
        c=39
        if b!=-1:
            c=9
        elif a<=1:
             return 0
        else: 
            c=6
        return c
    
    print(h(1,-4))
    
except: print('error')
