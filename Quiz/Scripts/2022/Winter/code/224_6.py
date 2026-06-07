try:
    a,b,c=6,4,8
    def h(b):
        a+=5
        b=3
        c=2
        return a+b+c
    
    a,b,c=3,4,1
    print(h(b),a,b,c)
    
except: print('error')
