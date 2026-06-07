try:
    
    a,b,c=9,8,6
    def f(a,b=7,c=7):
        print(a,b,c,end="")
    
    f(2,c=1,b=3)
    print(a,b,c)
    
except: print('error')
