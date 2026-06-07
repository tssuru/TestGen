try:
    
    a,b,c=6,9,8
    def f(a,b=7,c):
        print(a,b,c,end="")
    
    f(5,4,a=1)
    print(a,b,c)
    
except: print('error')
