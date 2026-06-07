try:
    
    a,b,c=7,8,6
    def f(a,b,c=8):
        print(a,b,c,end="")
    
    f(0,1)
    print(a,b,c)
    
except: print('error')
