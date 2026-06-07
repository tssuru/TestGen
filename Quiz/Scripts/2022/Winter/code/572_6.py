try:
    a,b,c=2,5,8
    def h(b):
        global c
        a=5
        b*=3
        c=1
        return a+b+c
    
    a,b,c=3,6,0
    print(h(b),a,b,c)
    
except: print('error')
