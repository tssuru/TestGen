try:
    a,b,c=6,9,1
    def h(a):
        global c
        a+=4
        b=2
        c=2
        return a+b+c
    
    a,b,c=7,0,8
    print(h(b),a,b,c)
    
except: print('error')
