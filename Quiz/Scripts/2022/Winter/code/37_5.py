try:
    
    a,b,c=7,6,8
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(a=2,a=0,b=5)
    print(a,b,c)
    
except: print('error')
