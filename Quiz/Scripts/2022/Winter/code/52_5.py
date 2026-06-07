try:
    
    a,b,c=6,7,8
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(2,a=5)
    print(a,b,c)
    
except: print('error')
