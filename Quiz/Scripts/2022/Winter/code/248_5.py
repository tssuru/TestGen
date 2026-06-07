try:
    
    a,b,c=9,8,6
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(1,0,a=5)
    print(a,b,c)
    
except: print('error')
