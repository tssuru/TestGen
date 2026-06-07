try:
    a,b,c=5,3,1
    def h(b):
        global c
        a+=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=8,3,2
    print(h(b),a,b,c)
    
except: print('error')
