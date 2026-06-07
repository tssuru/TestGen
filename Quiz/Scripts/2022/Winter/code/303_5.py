try:
    
    a,b,c=7,6,8
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(1,2,c=5)
    print(a,b,c)
    
except: print('error')
