try:
    
    a,b,c=9,6,8
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(3,3)
    print(a,b,c)
    
except: print('error')
