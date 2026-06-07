try:
    
    a,b,c=9,7,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(3,0,b=1)
    print(a,b,c)
    
except: print('error')
