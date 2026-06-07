try:
    a,b,c=9,1,7
    def h(b):
        a+=3
        b=5
        c=1
        return a+b+c
    
    a,b,c=6,2,8
    print(h(b),a,b,c)
    
except: print('error')
