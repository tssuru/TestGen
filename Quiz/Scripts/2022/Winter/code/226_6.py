try:
    a,b,c=7,2,0
    def h(a):
        global c
        a+=4
        b=3
        c=4
        return a+b+c
    
    a,b,c=4,8,5
    print(h(b),a,b,c)
    
except: print('error')
