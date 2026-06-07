try:
    a,b,c=7,0,4
    def h(b):
        a+=2
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,2,4
    print(h(b),a,b,c)
    
except: print('error')
