try:
    def h(a,b):
        c=46
        if b==4:
            return 3
        elif a<=0:
             c=9
        else: 
            return 5
        return c
    
    print(h(-2,7))
    
except: print('error')
