try:
    a,b,c=0,4,2
    def h(b):
        global c
        a=4
        b-=3
        c=3
        return a+b+c
    
    a,b,c=7,8,5
    print(h(b),a,b,c)
    
except: print('error')
