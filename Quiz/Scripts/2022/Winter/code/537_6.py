try:
    a,b,c=1,5,4
    def h(b):
        a=2
        b*=4
        c=1
        return a+b+c
    
    a,b,c=7,3,6
    print(h(b),a,b,c)
    
except: print('error')
