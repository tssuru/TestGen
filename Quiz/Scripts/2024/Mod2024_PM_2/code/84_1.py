try:
    a,b,c=9,3,8
    def h(a):
        global c
        a+=4
        b=1
        c=2
        return a+b+c
    
    a,b,c=1,0,6
    print(h(b),a,b,c)
    
except: print('error')
