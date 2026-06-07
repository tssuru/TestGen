try:
    a,b,c=3,5,1
    def h(b):
        global c
        a-=2
        b=4
        c=3
        return a+b+c
    
    a,b,c=9,7,4
    print(h(b),a,b,c)
    
except: print('error')
