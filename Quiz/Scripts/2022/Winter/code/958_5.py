try:
    
    a,b,c=7,7,8
    def f(a,b=9,c):
        print(a,b,c,end="")
    
    f(1,4,2)
    print(a,b,c)
    
except: print('error')
