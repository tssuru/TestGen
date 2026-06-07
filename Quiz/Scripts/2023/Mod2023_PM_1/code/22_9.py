try:
    a,b,c=9,1,4
    def h(b):
        a+=5
        b=2
        c=1
        return a+b+c
    
    a,b,c=5,2,6
    print(h(b),a,b,c)
    
except: print('error')
