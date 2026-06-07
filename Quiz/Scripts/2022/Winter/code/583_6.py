try:
    a,b,c=0,8,4
    def h(b):
        global c
        a+=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=3,7,5
    print(h(b),a,b,c)
    
except: print('error')
