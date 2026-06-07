try:
    
    a,b,c=7,9,8
    def f(a,b,c):
        print(a,b,c,end="")
    
    f(5,c=4,b=3)
    print(a,b,c)
    
except: print('error')
