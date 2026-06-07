try:
    
    a,b,c=7,6,8
    def f(a,b=9,c=8):
        print(a,b,c,end="")
    
    f(0,3,3)
    print(a,b,c)
    
except: print('error')
