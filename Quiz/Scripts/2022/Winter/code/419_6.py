try:
    a,b,c=7,2,1
    def h(b):
        global c
        a=5
        b*=4
        c=3
        return a+b+c
    
    a,b,c=9,5,3
    print(h(b),a,b,c)
    
except: print('error')
