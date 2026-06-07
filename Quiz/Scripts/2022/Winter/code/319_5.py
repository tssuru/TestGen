try:
    
    a,b,c=7,6,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(4,a=1)
    print(a,b,c)
    
except: print('error')
