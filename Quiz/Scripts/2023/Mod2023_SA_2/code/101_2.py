try:
    a,b,c=7,9,5
    def h(b):
        global c
        a=2
        b+=4
        c=3
        return a+b+c
    
    a,b,c=0,8,2
    print(h(b),a,b,c)
    
except: print('error')
