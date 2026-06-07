try:
    
    a,b,c=7,8,9
    def f(a,b=6,c=7):
        print(a,b,c,end="")
    
    f(2,0,1)
    print(a,b,c)
    
except: print('error')
