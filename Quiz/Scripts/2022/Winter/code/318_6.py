try:
    a,b,c=8,3,4
    def h(b):
        global c
        a=3
        b+=4
        c=1
        return a+b+c
    
    a,b,c=1,7,3
    print(h(b),a,b,c)
    
except: print('error')
